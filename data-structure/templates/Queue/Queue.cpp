#include "Queue.h"


// 队列初始化
Queue* initQueue(int size) {
    Queue* Q = new Queue;

    Q->MAX_SIZE = size;
    Q->front = 0;
    Q->rear = 0;
    Q->item = new char[Q->MAX_SIZE + 1];

    return Q;
}

// 队满
bool isFull(Queue* Q) {
    int flag = 0;
    if ((Q->rear + 1) % Q->MAX_SIZE == Q->front) {
        flag = 1;
    }
    return flag;
}

// 队空
bool isEmpty(Queue* Q) {
    int flag = 0;
    if (Q->rear == Q->front) {
        flag = 1;
    }
    return flag;
}

// 进队
void Add(Queue* Q, char data) {
    if (isFull(Q)) {
        return;
    }
    Q->item[Q->rear++] = data;
    //
    if (Q->rear + 1 == Q->MAX_SIZE) {
        Q->rear -= Q->MAX_SIZE;
    }
}

// 出队
void Remove(Queue* Q, char& e) {
    if (isEmpty(Q)) {
        return;
    }
    e = Q->item[Q->front++];
    if (Q->front + 1 == Q->MAX_SIZE) {
        Q->front -= Q->MAX_SIZE;
    }
}

// 清空队列
void clear(Queue* Q, bool print) {
    if (print) {
        while (!isEmpty(Q)) {
            char e;
            Remove(Q, e);
            printf("%c\n", e);
        }
    }
    delete[] Q->item;
    delete Q;
}