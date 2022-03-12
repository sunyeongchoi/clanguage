#include <stdio.h>
#include <stdlib.h>
typedef struct tagNode {
    int Data; /* 데이터 필드 */
    struct tagNode* NextNode; /* 다음 노드를 가리키는 포인터 */
} Node;

/* 노드 생성 */
Node* SLL_CreateNode(int NewData)
{
    Node* NewNode = (Node*)malloc(sizeof(Node));
    
    NewNode->Data = NewData; /* 데이터를 저장한다. */
    NewNode->NextNode = NULL; /* 다음 노드에 대한 포인터는 NULL로 초기화한다. */
    
    return NewNode; /* 노드의 주소를 반환한다. */
}

void SLL_DestoryNode (Node* Node)
{
    free(Node);
}

/* 노드 추가 */
void SLL_AppendNode(Node** HEAD, Node* NewNode)
{
    /* 헤드 노드가 NULL이라면 새로운 노드가 HEAD */
    if ( (*HEAD) == NULL)
    {
        *HEAD = NewNode;
    }
    else
    {
        /* 테일을 찾아 NewNode를 연결한다 */
        Node* Tail = (*HEAD);
        while (Tail->NextNode != NULL) {
            Tail = Tail->NextNode;
        }
        Tail->NextNode = NewNode;
    }
}

/* 노드 탐색 */
Node* SLL_GetNodeAt (Node* Head, int Location)
{
    Node* Current = Head;
    
    while (Current != NULL && (--Location) >= 0) {
        Current = Current->NextNode;
    }
    return Current;
}

/* 노드 제거 */
void SLL_RemoveNode (Node** Head, Node* Remove)
{
    if (*Head == Remove)
    {
        *Head = Remove->NextNode;
    }
    else{
        Node* Current = *Head;
        while (Current != NULL && Current->NextNode != Remove) {
            Current = Current->NextNode;
        }
        if (Current != NULL)
        {
            Current->NextNode = Remove->NextNode;
        }
    }
}

/* 노드 삽입 */
void SLL_InsertAfter (Node* Current, Node* NewNode)
{
    NewNode->NextNode = Current->NextNode;
    Current->NextNode = NewNode;
}

/* 노드 수 세기 */
int SLL_GetNodeCount (Node* Head)
{
    int Count = 0;
    Node* Current = Head;
    
    while (Current != NULL) {
        Current = Current->NextNode;
        Count++;
    }
    return Count;
}

int main() {
    Node* List = NULL;
    Node* NewNode = NULL;
    Node* MyNode = NULL;
    
    NewNode = SLL_CreateNode(117);
//    printf("%lu\n", sizeof(Node));
//    printf("%lu\n", sizeof(Node*));
    SLL_AppendNode(&List, NewNode);
    NewNode = SLL_CreateNode(119);
    SLL_AppendNode(&List, NewNode);
    
    MyNode = SLL_GetNodeAt(List, 1); /* 두번째 노드의 주소를 MyNode에 저장 */
    printf("%d\n", MyNode->Data); /* 119 출력 */
    
    SLL_RemoveNode(&List, MyNode); /* 두번째 노드 제거 */
    SLL_DestoryNode(MyNode); /* 링크드 리스트에서 제거한 노드를 메모리에서 완전히 소멸 */
    return 0;
}
