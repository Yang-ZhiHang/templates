#include "Queue.h"

// 初始化队列
Queue* initQueue(int size) {
    Queue* Q = new Queue;
    if (Q == nullptr) {
        cout << "内存分配失败" << endl;
        return nullptr;
    }
    Q->item = new int[size + 1];
    if (Q->item == nullptr) {
        cout << "内存分配失败" << endl;
        return nullptr;
    }
    Q->front = 0;
    Q->rear = 0;
    Q->MAX_SIZE = size + 1;
    return Q;
}

// 入队
bool enQueue(Queue* Q, int data) {
    if (isFull(Q)) {
        return 0;
    }
    Q->item[Q->rear] = data;
    Q->rear = (Q->rear + 1) % Q->MAX_SIZE;
    return 1;
}

// 出队
bool deQueue(Queue* Q, int& e) {
    if (isEmpty(Q)) {
        return 0;
    }
    e = Q->item[Q->front];
    Q->front = (Q->front + 1) % Q->MAX_SIZE;
    return 1;
}

// 判断队满
bool isFull(Queue* Q) {
    return (Q->rear + 1) % Q->MAX_SIZE == Q->front;
}

// 判断队空
bool isEmpty(Queue* Q) {
    return Q->rear == Q->front;
}

// 队列长度
bool QueueLength(Queue* Q, int& e) {
    e = (Q->rear - Q->front + Q->MAX_SIZE) % Q->MAX_SIZE;
    return 1;
}
