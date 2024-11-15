#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

typedef struct {
    int* item;     // 存储数据
    int front;     // 头指针
    int rear;      // 尾指针
    int MAX_SIZE;  // 最大容量
} Queue;

// 初始化队列
Queue* initQueue(int size);

// 入队
bool enQueue(Queue* Q, int data);

// 出队
bool deQueue(Queue* Q, int& e);

// 判断队空
bool isFull(Queue* Q);

// 判断队满
bool isEmpty(Queue* Q);

// 队列长度
bool QueueLength(Queue* Q, int& e);

#endif