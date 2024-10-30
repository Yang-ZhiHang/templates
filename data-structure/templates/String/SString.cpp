#include "SString.h"

void StringAssign(SString& S, char* str) {
    for (int i = 0; i < strlen(str); i++) {
        // 字符串下标从 1 开始
        S.ch[i + 1] = str[i];
    }
    S.length = strlen(str);
}

void get_next(SString T, int next[]) {
    int i = 1, j = 0;  // i 表示当前字符，j 表示当前字符的前一个字符
    next[1] = 0;
    while (i < T.length) {
        // 如果当前字符和前一个字符相同，则 next 数组值加 1
        if (0 == j || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            next[i] = j;
        }
        // 如果当前字符和前一个字符不同，则回退到前一个字符的 next 数组值
        else {
            j = next[j];
        }
    }
}

void get_nextval(SString T, int nextval[]) {
    int i = 1, j = 0;
    nextval[1] = 0;
    while (i < T.length) {
        // 如果当前字符和前一个字符相同，则 nextval 数组值加 1
        if (0 == j || T.ch[i] == T.ch[j]) {
            ++i;
            ++j;
            // 如果当前字符和前一个字符不同，则 nextval 数组值为当前字符的 next
            // 数组值
            if (T.ch[i] != T.ch[j]) {
                nextval[i] = j;
            }
            // 如果当前字符和前一个字符相同，则 nextval 数组值为前一个字符的
            // nextval 数组值
            else {
                nextval[i] = nextval[j];
            }
        }
        // 如果当前字符和前一个字符不同，则回退到前一个字符的 nextval 数组值
        else {
            j = nextval[j];
        }
    }
}

int Index_KMP(SString S, SString T, int pos) {
    int i = pos, j = 1;
    int nextval[T.length + 1];
    get_nextval(T, nextval);
    while (i <= S.length && j <= T.length) {
        // 如果当前字符和前一个字符相同，则 next 数组值加 1
        if (0 == j || S.ch[i] == T.ch[j]) {
            ++i;
            ++j;
        }
        // 如果当前字符和前一个字符不同，则回退到前一个字符的 next 数组值
        else {
            j = nextval[j];
        }
    }
    // 如果匹配成功，则返回匹配位置
    if (j > T.length) {
        return i - T.length;
    }
    return 0;
}
