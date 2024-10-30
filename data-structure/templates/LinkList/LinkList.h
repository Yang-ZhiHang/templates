#ifndef LINKLIST_H
#define LINKLIST_H

#include <iostream>
using namespace std;

// 定义链表节点的数据元素
typedef struct LNode {
    int data;
    struct LNode* next;
} LNode, *LinkList;

/**
 * @brief 初始化链表
 * @param L 链表
 */
void InitList(LinkList& L);

/**
 * @brief 为链表添加节点
 * @param rear 是否从尾部插入（尾插法），默认为 false
 */
void AddNode(LinkList& L, int data, bool rear = false);

/**
 * @brief 获取元素，i 从 1 开始
 * @param i 元素位置
 * @param e 用于接收获取的元素
 */
int GetElem(LinkList& L, int i, int& e);

/**
 * @brief 删除元素，i 从 1 开始
 * @param i 元素位置
 */
int DeleteElem(LinkList& L, int i);

/**
 * @brief 输出链表的所有元素
 * @param L 链表
 */
void PrintList(LinkList& L);

#endif
