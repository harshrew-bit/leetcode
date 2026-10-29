class Solution(object):
    def deleteMiddle(self, head):
        dummy = ListNode(0)
        dummy.next=head
        prev=dummy
        slow=head
        fast=head
        while fast is not None and fast.next is not None:
            slow=slow.next
            fast=fast.next.next
            prev=prev.next
        prev.next=slow.next
        slow.next=None
        return dummy.next       
        