#include "Stack.h"

// 初始化栈
Stack* initStack(int size) {
    Stack* S = new Stack;

    S->MAX_SIZE = size;
    S->top = -1;
    S->item = new char[S->MAX_SIZE];

    return S;
}

// 栈满
bool isFull(Stack* S) {
    int flag = 0;
    if (S->top == S->MAX_SIZE) {
        flag = 1;
    }
    return flag;
}

// 栈空
bool isEmpty(Stack* S) {
    int flag = 0;
    if (-1 == S->top) {
        flag = 1;
    }
    return flag;
}

// 进栈
void Push(Stack* S, char data) {
    if (isFull(S)) {
        return;
    }
    S->item[++S->top] = data;
}

// 出栈
void Pop(Stack* S, char& e) {
    if (isEmpty(S)) {
        return;
    }
    e = S->item[S->top];
    S->top--;
}

// 查看栈顶元素
void Peek(Stack* S, char& e) {
    e = S->item[S->top];
}

// 查看所有元素
void PrintStack(Stack* S, bool reverse) {
    printf("\n");
    // 出栈顺序输出
    if (!reverse) {
        for (int i = S->top; i >= 0; i--) {
            printf("%c", S->item[i]);
        }
    }
    // 从栈底开始输出
    else {
        for (int i = 0; i <= S->top; i++) {
            printf("%c", S->item[i]);
        }
    }
}
