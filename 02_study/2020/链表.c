/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//快慢指针（注意边界条件）
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* fast = head;
    struct ListNode* low = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        low = low->next;
    }
    return low;
}





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int getDecimalValue(struct ListNode* head){
    struct ListNode* pLink = head;

    int sum = 0;

    while (pLink){
        sum = (sum<<1) + pLink->val;
        pLink = pLink->next;      
    }
   return sum;
}


int getDecimalValue(struct ListNode* head){
    struct ListNode* pLink = head;

    int sum = 0;

    while (pLink){
        sum = (sum<<1) |(pLink->val);
        pLink = pLink->next;      
    }
   return sum;
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val){
    struct ListNode* slow = head, *fast = slow->next;

    if (slow->val == val)
        return fast;
    
    while (fast != NULL && fast->val != val){
        slow = slow->next;
        fast = fast->next;
    }

    if (fast == NULL){
        return NULL;
    } else {
        slow->next = slow->next->next;
        return head;
    }
}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

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

//binarySearch func
int binarySearch(int arr[], int target, int size);

//quickSort func
void quickSort(int arr[], int size);