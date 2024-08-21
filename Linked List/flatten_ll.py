class Solution:
    def mergeTwoSortedList(self, l1, l2):
        if not l1:
            return l2
        if not l2:
            return l1
        
        result = None
        if l1.data < l2.data:
            result = l1
            result.bottom = self.mergeTwoSortedList(l1.bottom, l2)
        else:
            result = l2
            result.bottom = self.mergeTwoSortedList(l1, l2.bottom)
        
        return result
    
    def flatten(self, root):
        if not root:
            return None
        
        root2 = self.flatten(root.next)
        return self.mergeTwoSortedList(root, root2)