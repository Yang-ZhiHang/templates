#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

typedef struct {
    char* item;    // 存放元素
    int top;       // 栈顶指针
    int MAX_SIZE;  // 元素最大存储数量
} Stack;

// 初始化栈
Stack* initStack(int size);

// 栈满
bool isFull(Stack* S);

// 栈空
bool isEmpty(Stack* S);

// 进栈
void Push(Stack* S, char data);

// 出栈
void Pop(Stack* S, char& e);

// 查看栈顶元素
char Peek(Stack* S);

// 查看所有元素
void PrintStack(Stack* S, bool reverse);

#endif