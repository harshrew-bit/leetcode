class Solution(object):
    def addTwoNumbers(self, l1, l2):
        dummy= ListNode(0)
        curr=dummy
        t1=l1
        t2=l2
        carry=0
        while t1 or t2 or carry:
            sum=carry
            if t1:
                sum+=t1.val
                t1=t1.next
            if t2:
                sum+=t2.val
                t2=t2.next
            curr.next=ListNode(sum%10)
            carry=sum//10
            curr=curr.next
        return dummy.next
        