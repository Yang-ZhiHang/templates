#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

typedef struct {
    char* item;    // 存放元素
    int top;       // 栈顶指针
    int MAX_SIZE;  // 元素最大存储数量
} Stack;

/**
 * @brief 初始化栈
 * @param size 栈能存储的元素最大个数
 */
Stack* initStack(int size);

/**
 * @brief 栈满
 * @param S 栈
 */
bool isFull(Stack* S);

/**
 * @brief 栈空
 * @param S 栈
 */
bool isEmpty(Stack* S);

/**
 * @brief 进栈
 * @param S 栈
 * @param data 要进栈的元素
 */
void Push(Stack* S, char data);

/**
 * @brief 出栈
 * @param S 栈
 * @param e 要出栈的元素
 */
void Pop(Stack* S, char& e);

/**
 * @brief 查看栈顶元素
 * @param S 栈
 * @param e 用于接收栈顶元素
 */
void Peek(Stack* S, char& e);

/**
 * @brief 查看所有元素
 * @param S 栈
 * @param reverse 是否逆序输出，默认为 false
 */
void PrintStack(Stack* S, bool reverse);

#endif
