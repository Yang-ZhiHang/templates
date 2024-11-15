#include "Stack.h"

// 初始化栈
Stack* initStack(int size) {
    Stack* S = new Stack;
    if (S == nullptr) {
        cout << "内存分配失败" << endl;
        return nullptr;
    }

    S->item = new char[size];
    if (S->item == nullptr) {
        cout << "内存分配失败" << endl;
        return nullptr;
    }

    S->MAX_SIZE = size;
    S->top = -1;
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
bool Push(Stack* S, char data) {
    int flag = 0;
    if (!isFull(S)) {
        S->item[++S->top] = data;
        flag = 1;
    }
    return flag;
}

// 出栈
bool Pop(Stack* S, char& e) {
    int flag = 0;
    if (!isEmpty(S)) {
        e = S->item[S->top];
        S->top--;
        flag = 1;
    }
    return flag;
}

// 查看栈顶元素
bool Peek(Stack* S, char& e) {
    int flag = 0;
    if (!isEmpty(S)) {
        e = S->item[S->top];
        flag = 1;
    }
    return flag;
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
