# merge-sort-c
## A recursive sorting algorithm for integers.

This algorithm rearranges an array of integers, low to high.

### Why i built it
I thought this sorting algorithm was really cool, when I first learned about it in my CS50 course. The logic behind it is not that hard to understand, but I was wondering how to actually lay that out in code. So I just had to find out :)

### How it works
The function 'merge_sort' will use indices to partition an array into smaller halves recursively, until we end up with only 1 integer. If this is the case, the single (already "sorted") integer is passed back. At that point the second function, 'merge', will go through both halves, one step at a time, and compare both values for the lower number. This part of the array will then be rearranged, in ascending order, and passed back to the parent 'merge_sort'. This function will receive two already sorted partitions, so this process will proceed up the call stack, until everything is in order.

### Usage
gcc merge_sort.c -o ./merge_sort && merge_sort
