#include <stdio.h>
#include <math.h>
/*
 * Binary Search
 * 
 * Problem: Return index of target element or -1
 *  
 * Time/Space Complexity:
 * O(log n) time: element 1/2 of elements in each iteration
 * O(1) space (constant space): no elements stored 
 * 
 */
int binarySearch(int numbers[], int target,  int left, int right) {
    if(left > right) {
        return -1;
    }
    int middle = floor((left + right) / 2); 
    int potentialMatch = numbers[middle];
    if (potentialMatch == target) {
        return middle;
    }
    if (target > potentialMatch) {
        return binarySearch(numbers, target, middle + 1, right);   
    }
    return binarySearch(numbers, target, left, middle - 1);
}

int main() {
    printf("Hello, Metaverse!\n");
    int array[] = { 2, 5, 6, 9, 14, 19, 23 };
    int target = 19;
    int binarySearchResult = binarySearch(array, target,  0, (int)sizeof(array) - 1);
    printf("Binary Search. Target is: %d\n", binarySearchResult);
    return 0;
}
