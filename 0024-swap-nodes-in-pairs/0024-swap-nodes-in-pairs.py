class Solution(object):
    def swapPairs(self, head):
        if head is None:
            return head
        dummy= ListNode(0)
        dummy.next=head
        prev=dummy
        temp=head
        while temp and temp.next:
            front = temp.next
            prev.next=front
            temp.next=front.next
            front.next=temp
            prev=temp
            temp=temp.next
        return dummy.next