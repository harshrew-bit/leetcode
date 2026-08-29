class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode*t1=l1;
    ListNode*t2=l2;
    int carry=0;
    ListNode* dummy=new ListNode(0);
    ListNode*curr=dummy;
    while(t1!=NULL||t2!=NULL||carry){
        int sum=carry;
        if(t1) sum+=t1->val, t1= t1->next;
        if(t2) sum+=t2->val, t2=t2->next;

        curr->next=new ListNode(sum%10);
        curr=curr->next;
        carry=sum/10;

        
    }
    return dummy->next;
    }
};