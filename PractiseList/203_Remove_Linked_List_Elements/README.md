# Description
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

# Approach
Just remove specific element in linked list. When remove the head node recommend use **dummyHead**. Since remove head is different from remove other element, we remove head node specifically.
