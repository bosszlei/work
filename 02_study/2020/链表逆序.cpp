/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*c语言迭代法*/
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* p1 = NULL;
    struct ListNode* p2 = head;
    struct ListNode* tmp;
    if (p2 == NULL )
        return head;
    
    while(p2){
        tmp = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = tmp;
    }
    return p1;
}

/*c++ 递归法*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head; //递归出口
        ListNode* newNode = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return newNode;
    }
};