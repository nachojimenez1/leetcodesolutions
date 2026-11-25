# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def splitListToParts(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: List[Optional[ListNode]]
        """
        res = []
        if head == None:
            for _ in range(k):
                res.append(None)
            return res
        count = 1
        current = head

        while(current.next):
            count +=1
            current = current.next
        
        current = head
        if count > k:
            size = count // k
            extra = count % k

            for _ in range(k):
                res.append(current)
                if extra > 0:
                    for _ in range(size):
                        current = current.next
                    
                    new_head = current.next
                    current.next = None
                    current = new_head
                    extra -=1
                else:
                    for _ in range(size-1):
                        current = current.next
                    
                    new_head = current.next
                    current.next = None
                    current = new_head
        else:
            extra = k - count
            current = head
            new_tail = head
            
            for _ in range(count):
                current = new_tail
                new_tail = current.next
                current.next = None
                res.append(current)
                

            for _ in range(extra):
                res.append(None)

        return res
