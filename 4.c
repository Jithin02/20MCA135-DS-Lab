/*
Merge Two Arrays

AIM 

Write a C program to merge two arrays and sort the new array.

----------------------------------------------------------------------------
ALGORITHM

Step  1: Start
Step  2: Declare 2 integer arrays arr1[], arr2[] of size 50 and another integer array mergedarray[] of size 100, 
         variables i, j, k, size1 and size2 of integer type. 
Step  3: Get the size and elements in sorted order for both the arrays.
Step  4: set i, j, k as 0.
Step  5: while i is less than size1 and j is less than size2, do the following
step  6: check if arr1[i] is less than  arr2. If yes add arr1[i] to mergedarray[k],increment i by 1.
         Else, add arr2[j] to mergedarray[k] and increment j by 1.
         Increment k by 1.
Step  7: Copy remaining elements (if any) of both arr1[] and arr2[] to mergedarray[].
Step  8: Display  mergedarray as resultant array.
Step  9: Stop
----------------------------------------------------------------------------*/

#include <stdio.h>

void main() {
    int i, j, k, arr1[50], arr2[50], mergedarray[100], size1, size2;

    //printf("Merge and sort\n");

    // Input for first array
    printf("Enter the size of first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array (in sorted order) :\n");
    for(i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input for second array
    printf("Enter the size of second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array (in sorted order) :\n");
    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    // Merging arrays
    while(i < size1 && j < size2) {
        if(arr1[i] < arr2[j]) {
            mergedarray[k] = arr1[i];
            i++;
        } else {
            mergedarray[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements from arr1 if any
    while(i < size1) {
        mergedarray[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from arr2 if any
    while(j < size2) {
        mergedarray[k] = arr2[j];
        j++;
        k++;
    }

    // Output merged array
    printf("Merged and sorted array:\n");
    for(i = 0; i < size1 + size2; i++) {
        printf("%d  ", mergedarray[i]);
    }
    printf("\n");

}

/*-------------------------------------------------------------------------------------------------------------------------------

OUTPUT

Merge and sort
Enter the size of first array: 4
Enter the elements of the first array (in sorted order) :
1
3
5
7
Enter the size of second array: 3
Enter the elements of the second array (in sorted order) :
2
4
6
Merged and sorted array:
1  2  3  4  5  6  7  

RESULT

Program executed successfully and output is verified.

------------------------------------------------------------------------------------------------------------------------------------*/