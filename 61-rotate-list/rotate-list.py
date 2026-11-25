# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """
        if not head or k == 0:
            return head
        count = 1
        current = head

        while(current.next):
            count+=1
            current = current.next

        k = k % count

        if k == 0:
            return head

        current.next = head
        steps = count - k
        new_tail = head

        for _ in range(steps-1):
            new_tail = new_tail.next
        
        new_head = new_tail.next
        new_tail.next = None
        return new_head


        