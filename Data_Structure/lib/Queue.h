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

// 队列初始化
Queue* initQueue(int size);

// 队空
bool isEmpty(Queue* Q);

// 队满
bool isFull(Queue* Q);

// 出队
void Remove(Queue* Q, char& e);

// 入队
void Add(Queue* Q, char data);

#endif