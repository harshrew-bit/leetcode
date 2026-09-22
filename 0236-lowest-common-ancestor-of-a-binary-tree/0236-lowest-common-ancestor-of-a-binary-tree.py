class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        if root is None:
            return None
        if root==p or root==q:
            return root
        l=self.lowestCommonAncestor(root.left,p,q)
        r=self.lowestCommonAncestor(root.right,p,q)   
        if l is None:
            return r
        elif r is None:
            return l
        else :
            return root