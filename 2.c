
/*
Linear Search

AIM

Write a c program to implement Linear Search.

-----------------------------------------------------------------------------
ALGORITHM

Step 1: Start
Step 2: Declare an integer array ar[] of maximum size 50 and variables i,num,flag,size of integer datatype.
Step 3: Set flag as 0.
Step 4: Get the size and elements of array from user.
Step 5: Print the elements of array.
Step 6: Enter the element to be searched and store it to variable num.
step 7: Check for each element in array is equal to num using for loop.
Step 8: If element is equal, print the element is found in respective index , set flag as 1 and go to step 10.
Step 9: If flag is 0, print element not found.
Step 10: Stop.
------------------------------------------------------------------------------- */
#include <stdio.h>
void main(){
	int i,num,flag=0,ar[50],size;
	printf("Enter the size of the array (max 50): ");
	scanf("%d",&size);
	printf("Enter the elements: ");
	for(i=0;i<size;i++){
		scanf("%d",&ar[i]);
	}
	printf("Array of size %d is:\n",size);
	for(i=0;i<size;i++){
		printf("%d ",ar[i]);
	}
	printf("\nEnter a number to search: ");
	scanf("%d",&num);
	for(i=0;i<size;i++){
		if(num==ar[i]){
			printf("The number %d is present at the index %d",num,i);
			flag=1;
			break;//or i=size
		}
	}
	if(flag==0){
		printf("The number %d is not present",num);
	}
}
/*-------------------------------------------------------------------------------------------------------------------------------

OUTPUT

Enter the size of the array (max 50): 5
Enter the elements: 20 76 21 90 45
Array of size 5 is:
20 76 21 90 45 
Enter a number to search: 21
The number 21 is present at the index 2

RESULT

Program executed successfully and output is verified.

------------------------------------------------------------------------------------------------------------------------------------*/