//
//  LinkedList.h
//  clanguage
//
//  Created by 최수녕 on 2022/03/12.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct tagNode
{
    ElementType Data;
    struct tagNode* NextNode;
} Node;

/* 함수 원형 선언 */
Node* SLL_CreateNode (ElementType NewData);
void SLL_DestoryNode (Node* Node);
void SLL_AppendNode (Node** Head, Node* NewNode);
void SLL_InsertAfter (Node* Currrent, Node* NewNode);
void SLL_InsertNewHead (Node** Head, Node* NewNode);
void SLL_RemoveNode (Node** Head, Node* Remove);
Node* SLL_GetNodeAt (Node* Head, int Location);
int SLL_GetNodeCount (Node* Head);

#endif /* LinkedList_h */
