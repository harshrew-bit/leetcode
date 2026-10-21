class Solution(object):
    def removeNthFromEnd(self, head, n):
        dummy=ListNode(0)
        dummy.next=head
        temp = dummy
        slow=dummy
        while n>0:
            slow=slow.next
            n-=1
        while slow.next is not None:
            temp=temp.next
            slow=slow.next
        temp.next=temp.next.next
        return dummy.next

        