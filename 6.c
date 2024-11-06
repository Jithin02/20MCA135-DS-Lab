/*----------------------------------------------------------------------------
ALGORITHM

Step  1: Start
Step  2: Define size as 5, declare integer array queue[] of size, front, rear, item as global variable. Set both front and rear as -1. 
Step  3: In main function, declare variable choice of integer type.
Step  4: Display menu options 1 for insertion, 2 for deletion, 3 for display queue and 4 to exit from the program.
Step  5: Loop the options  until user chooses to exit.
Step  6: Ask the user to enter the choice for above options.
step  7: Call insert(), delete(), display()functions for options 1, 2, 3 respectively.
Step  8: If the choice is 4, exit the program.
Step  9: If any other choice print 'Invalid Choice' as error message.
Step  10: Stop

insert()
Step  1: Start
Step  2: If rear is greater than or equal to size - 1, print Queue is full.
         Else, get the element from the user to the value.
Step  3: check if front is equal to -1. If yes, set front as 0.
Step  4: increment rear, add element to queue[rear] 
Step  5: Stop

delete()
Step  1: Start
Step  2: If front is equal to -1 or front greater than rear, Queue is empty.
		 Else, delete queue[front], increment front by 1.
Step  3: if front is greater than rear, set both front and rear as -1.
Step  4: Stop

display()
Step  1: Start
Step  2: If front is equal to -1, print Queue is empty.
         Else, print elements of queue array
Step  3: Stop
------------------------------------------------------------------------------ */
#include <stdio.h>
#include <stdlib.h>
#define size 5
int front=-1,rear=-1,item,queue[size];
void insert();
void insert(){
	if(rear>=size-1){
		printf("Queue is full\n");
	}
	else{
			printf("Enter the element:");
			scanf("%d",&item);
			if(front==-1){
				front=0;
	
			}
            rear++;
			queue[rear]=item;
			
	}

}

void delete();
void delete(){
	if((front==-1)||(front>rear)){
	printf("Queue is empty\n");
	}
	else{
		item=queue[front];
		printf("%d is deleted\n",item);
		front++;
        if (front > rear) { // Reset queue if all elements are deleted
            front = rear = -1;
        }
	}
}

void display();
void display(){
	if(front==-1)
		printf("Queue is empty\n");
	else{
		for(int i=front;i<=rear;i++){
			printf("%d\n",queue[i]);
		}
	}
}

void main(){
	int choice;
	printf("Menu\n1 for insertion\n2 for deletion\n3 for display\n4 to exit\n");
	while(choice){
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
                printf("Exiting....\n");
				exit(0);
				break;
			default:
				printf("Invalid Choice\n");
				break;
		}
	}
	
}
