# Description
Given the head of a linked list, return the list after sorting it in ascending order.

# Approach
Since this problem asked us sorted in O(NlogN), we can use `priority_quque` to complete this requirement.

`priority_queue` can sort in O(NlogN), then we through an entire queue to create a new list.
