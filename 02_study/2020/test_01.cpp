#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

//definition of link list
typedef int ElemType;
struct ListNode{
    ElemType val;
    struct ListNode *next;
};


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;

    while (curr != NULL){
        struct ListNode *NodeTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = NodeTemp;
    }
    return prev;
}

bool is_size_ok(int size)
{
    const int max_size = 1024;
    const string msg("Request size is not supported");

    if (size <= 0 || size > max
    
    _size){

    }
}

/*定义函数指针数组*/
const vector<int>* (*seq_array[])(int) = {
    a,b,c,d,e,f
}

int main(void)
{


}