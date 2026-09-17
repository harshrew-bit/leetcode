class Solution(object):
    def reversell(self,head2):
        curr=head2
        prev=None
        while curr is not None:
            front=curr.next
            curr.next=prev
            prev=curr
            curr=front
        return prev
    def reorderList(self, head):
        slow=head
        fast=head
        while fast is not None and fast.next is not None:
            slow=slow.next
            fast=fast.next.next
        temp1=slow.next
        slow.next=None
        temp2=self.reversell(temp1)
        temp1=head
        while temp2 is not None:
            t1=temp1.next
            t2=temp2.next
            temp1.next=temp2
            temp2.next=t1
            temp1=t1
            temp2=t2
        return head


        