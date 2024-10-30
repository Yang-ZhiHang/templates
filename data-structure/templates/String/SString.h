#ifndef SSTRING_H
#define SSTRING_H
#include <cstring>
#include <iostream>
using namespace std;

#define MAX_LENGTH 255

// Static String 静态串（定长顺序存储结构）
typedef struct {
    char ch[MAX_LENGTH + 1];
    int length;
} SString;

// 串的赋值
void StringAssign(SString& S, char* str);

/**
 * @brief 计算模式串的 next 数组
 * @param T 模式串
 * @param next 存储 next 数组的数组
 */
void get_next(SString T, int next[]);

/**
 * @brief 计算模式串的 nextval 数组
 * @param T 模式串
 * @param nextval 存储 nextval 数组的数组
 */
void get_nextval(SString T, int nextval[]);

/**
 * @brief KMP 算法
 * @param S 主串
 * @param T 模式串
 * @param pos 起始位置
 * @return 模式串在主串中的位置
 */
int Index_KMP(SString S, SString T, int pos);

#endif
