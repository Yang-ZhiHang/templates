#include "LinkList.h"

void InitList(LinkList& L) {
    // 为 L 分配内存
    L = new LNode;
    // 将 L 的 next 指针指向 NULL
    L->next = NULL;
}


void AddNode(LinkList& L, int data, bool rear = false) {
    // 创建一个新结点
    LNode* p = new LNode;
    p->data = data;
    if (rear) {
        // 获取 L 链表的尾部节点
        LNode* tail = L;
        while (tail->next) {
            tail = tail->next;
        }
        // 将新结点插入到链表的尾部
        p->next = NULL;
        tail->next = p;
    } else {
        // 将新结点插入到链表的头部
        p->next = L->next;
        L->next = p;
    }
}

int GetElem(LinkList& L, int i, int& e) {
    // 获取链表的头部结点
    LNode* p = L->next;  // 用于判断是否查找到最后一个元素
    int j = 1;           // 用于计算查找了几个元素

    // 当 p 不为空时，遍历链表
    while (p) {
        // p = p->next;
        // ++j;  // j 永远不会等于 1，所以 i == 1 时，结果有错
        // if (i == j) {
        //     break;
        // }
        if (i == j) {
            break;
        }
        ++j;
        p = p->next;
    }

    // 当 p 为空时，返回 0（给定的 i 超出了链表的长度）
    if (!p) {
        return 0;
    }

    // 返回 p 指向的结点的数据
    e = p->data;

    return 1;
}

int DeleteElem(LinkList& L, int i) {
    // 获取链表的头部结点
    LNode* p = L->next;  // 用于判断是否查找到最后一个元素
    LNode* prev = L;     // 用于指向前一个节点
    int j = 1;           // 用于计算查找了几个元素

    // 当 p 不为空时，遍历链表
    while (p) {
        if (i == j) {
            // 删除当前节点
            prev->next = p->next;
            // 释放内存空间
            delete p;
            break;
        }
        ++j;
        prev = p;
        p = p->next;
    }

    // 当 p 为空时，返回 -1（给定的 i 超出了链表的长度）
    if (!p) {
        return 0;
    }

    return 1;
}

void PrintList(LinkList& L) {
    // 获取链表的头部结点
    LNode* p = L->next;

    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
}
