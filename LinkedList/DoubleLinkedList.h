//
//  DoubleLinkedList.h
//  LinkedList
//
//  Created by 최수녕 on 2022/03/16.
//

#ifndef DoubleLinkedList_h
#define DoubleLinkedList_h

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct tagNode
{
    ElementType Data; /* 데이터 필드 */
    struct tagNode* PrevNode; /* 이전 노드를 가리키는 포인터 */
    struct tagNode* NextNode; /* 다음 노드를 가리키는 포인터 */
} Node;

/* 함수 원형 선언 */
Node* DLL_CreateNode (ElementType NewData);
void DLL_DestoryNode (Node* Node);
void DLL_AppendNode (Node** Head, Node* NewNode);
void DLL_InsertAfter (Node* Current, Node* NewNode);
void DLL_RemoveNode (Node** Head, Node* Remove);
Node* DLL_GetNodeAt (Node* Head, int Location);
int DLL_GetNodeCount (Node* Head);

#endif /* DoubleLinkedList_h */
