#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

typedef struct {
    char* item;    // 队列的存储数组
    int front;     // 队头指针
    int rear;      // 队尾指针
    int MAX_SIZE;  // 栈能存储的元素最大个数
} Queue;

/**
 * @brief 队列初始化
 * @param size 队列能存储的元素最大个数
 */
Queue* initQueue(int size);

/**
 * @brief 队空
 * @param Q 队列
 */
bool isEmpty(Queue* Q);

/**
 * @brief 队满
 * @param Q 队列
 */
bool isFull(Queue* Q);

/**
 * @brief 入队
 * @param Q 队列
 * @param data 要入队的元素
 */
void Add(Queue* Q, char data);

/**
 * @brief 出队
 * @param Q 队列
 * @param e 用于接收出队的元素
 */
void Remove(Queue* Q, char& e);

#endif