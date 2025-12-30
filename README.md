# merge-sort-c
A recursive sorting algorithm for integers.

### What does it do?
It rearranges an array of integers, low to high.

### How?
The function "merge_sort" will split an array into smaller halves recursively, until we end up with only 1 or 2 integers. At that point the second function, "merge", will go through both halves, one step at a time, and check which number is lower. This part of the array will then be rearranged, in ascending order, and passed back to the parent "merge_sort" function.

### Usage
gcc merge_sort.c -o ./merge_sort && merge_sort

### Why?
I thought this sorting algorithm was really cool, when i first learned about it in my CS50 course. The logic behind it is not that hard to understand, but i was wondering how to actually lay that out in code. So i just had to find out :)
