//#include "LinkedList.h"
//
//int main (void)
//{
//    int i = 0;
//    int Count = 0;
//    Node* List = NULL;
//    Node* Current = NULL;
//    Node* NewNode = NULL;
//
//    /* 노드 5개 추가 */
//    for (i=0; i<5; i++)
//    {
//        NewNode = SLL_CreateNode(i);
//        SLL_AppendNode(&List, NewNode);
//    }
//
////    NewNode = SLL_CreateNode(-1);
////    SLL_InsertNewHead(&List, NewNode);
////
////    NewNode = SLL_CreateNode(-2);
////    SLL_InsertNewHead(&List, NewNode);
//
//    /* 리스트 출력 */
//    Count = SLL_GetNodeCount(List);
//    for (i=0; i<Count; i++)
//    {
//        Current = SLL_GetNodeAt(List, i);
//        printf("List[%d] : %d\n", i, Current->Data);
//    }
//
//    /* 리스트의 세 번째 노드 웨이 새 노드 삽입 */
//    printf("\nInserting 3000 After [2]...\n\n");
//
//    Current = SLL_GetNodeAt(List, 2);
//    NewNode = SLL_CreateNode(3000);
//
//    SLL_InsertAfter(Current, NewNode);
//
//    /* 리스트 출력 */
//    Count = SLL_GetNodeCount(List);
//    for (i=0; i<Count; i++)
//    {
//        Current = SLL_GetNodeAt(List, i);
//        printf("List[%d] : %d\n", i, Current->Data);
//    }
//
//    /* 모든 노드를 메모리에서 제거 */
//    printf("\nDestorying List...\n");
//
//    for (i=0; i<Count; i++)
//    {
//        Current = SLL_GetNodeAt(List, i);
//
//        if (Current != NULL)
//        {
//            SLL_RemoveNode(&List, Current);
//            SLL_DestoryNode(Current);
//        }
//    }
//    return 0;
//}

#include "DoubleLinkedList.h"

int main (void)
{
    int     i       = 0;
    int     Count   = 0;
    Node*   List    = NULL;
    Node*   NewNode = NULL;
    Node*   Current = NULL;
    
    /* 노드 5개 추가 */
    for (i=0; i<5; i++)
    {
        NewNode = DLL_CreateNode(i);
        DLL_AppendNode(&List, NewNode);
    }
    
    /* 리스트 출력 */
    Count = DLL_GetNodeCount(List);
    for (i=0; i<Count; i++)
    {
        Current = DLL_GetNodeAt(List, i);
        printf("List[%d] : %d\n", i, Current->Data);
    }
    
    /* 리스트의 세 번째 칸 뒤에 노드 삽입 */
    printf("\nInserting 3000 After [2]...\n\n");
    
    Current = DLL_GetNodeAt(List, 2);
    NewNode = DLL_CreateNode(3000);
    DLL_InsertAfter(Current, NewNode);
    
    /* 리스트 출력 */
    Count = DLL_GetNodeCount(List);
    for (i=0; i<Count; i++)
    {
        Current = DLL_GetNodeAt(List, i);
        printf("List[%d] : %d\n", i, Current->Data);
    }
    
    /* 모든 노드를 메모리에서 제거 */
    printf("\nDestorying List...\n");
    
    Count = DLL_GetNodeCount(List);
    
    for (i=0; i<Count; i++)
    {
        Current = DLL_GetNodeAt(List, i);
        if (Current != NULL)
        {
            DLL_RemoveNode(&List, Current);
            DLL_DestoryNode(Current);
        }
    }
    return 0;
}
