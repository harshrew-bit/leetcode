class Solution(object):
    def getIntersectionNode(self, headA, headB):
        
        t1=headA
        t2=headB
        while t1 is not t2:
            t1=t1.next
            t2=t2.next
            if t1==t2 :
                return t1
            if t2 is None :
                t2=headA
            if t1 is None:
                t1=headB
                       
        return t1
        