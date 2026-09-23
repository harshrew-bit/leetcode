class Solution(object):
    def rotateRight(self, head, k):
        cnt=0
        temp=head
        if head is None or head.next is None:
            return head
        while temp.next is not None:
            temp=temp.next
            cnt=cnt+1
        curr=head
        k=k%(cnt+1)
        if k == 0:
            return head
        steps=cnt-k
        while steps:
            curr=curr.next
            steps-=1
        ans=curr.next
        curr.next=None
        temp.next=head
        return ans