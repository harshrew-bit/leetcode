class Solution(object):
    
    def postorderTraversal(self, root):
        ans=[]
        def postorder(node):
            if node:
                postorder(node.left)
                postorder(node.right)
                ans.append(node.val)
        postorder(root)
        return ans
        