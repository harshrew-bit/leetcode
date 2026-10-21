class Solution(object):
    def reverseList(self, head):
        prev=None
        curr=head
        while curr is not None:
            front = curr.next
            curr.next=prev
            prev=curr
            curr=front
        return prev
        