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
