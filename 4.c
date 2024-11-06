#include <stdio.h>

int main() {
    int i, j, k, arr1[50], arr2[50], mergedarray[100], size1, size2;

    printf("Merge and sort\n");

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

    return 0;
}