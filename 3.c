//Binary search

#include <stdio.h>
void main(){

	int arr[20],i,j,size,temp,midsize,flag=0,value;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	
	//Reading array elements
	printf("Enter the elements: ");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	
	//Sorting
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	//Displaying sorted array
	for(i=0;i<size;i++){
		printf("%d  ",arr[i]);
	}
	
	printf("\nEnter the element to be searched: ");
	scanf("%d",&value);
	
	//Implementing BInary Search
	midsize=(size/2);
	if(arr[midsize]==value){
		printf("Element %d is found at position %d\n",value,midsize+1);
		flag=1;
	}else if(value>arr[midsize]){
					for(i=midsize+1;i<size;i++){
							if(value==arr[i]){
								printf("Element %d is found at position %d\n",value,i+1);
								flag=1;
							}
					}
	}else /*if(value<arr[midsize])*/{
		for(i=midsize-1;i>=0;i--){
			if(value==arr[i]){
				printf("Element %d is found at position %d\n",value,i+1);
				flag=1;
			}
		}
	}
	if(flag==0){
		printf("Element is not found\n");
	}
}
