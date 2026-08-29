class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode*temp=head;
    ListNode*dummy=new ListNode(0);
    dummy->next=head;
    ListNode*curr=dummy;
    while(temp!=NULL&&n!=0){
        temp=temp->next;
        n--;
    }       
    while(temp!=NULL){
        temp=temp->next;
        curr=curr->next;
    } 
    ListNode*front=curr->next;
    curr->next=front->next;
    front->next=NULL;
    return dummy->next;
    }
};