class Solution(object):
    def oddEvenList(self, head):
        if head is None or head.next is None:
            return head
        temp=head
        even=head
        odd=head.next
        temp2=odd
        while odd and odd.next:
            even.next=odd.next
            even=even.next
            odd.next=even.next
            odd=odd.next
            
        even.next=temp2
        return head