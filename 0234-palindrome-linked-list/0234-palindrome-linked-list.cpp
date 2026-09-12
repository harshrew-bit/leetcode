class Solution {
public:
ListNode* reversell(ListNode*temp){
    ListNode*prev=NULL;
    ListNode*curr=temp;
    while(curr!=NULL){
        ListNode*front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode*t1=head;
    ListNode*t2=reversell(slow);
    while(t2!=NULL&&t1!=NULL){
        if(t1->val!=t2->val) return false;
        t1=t1->next;
        t2=t2->next;
    }
    return true;
    }
};
