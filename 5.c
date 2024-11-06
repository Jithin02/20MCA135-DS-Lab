#include <stdio.h>
#include <stdlib.h>
	void main(){
		int stack[5],size=5,top=-1,i,ch,value;
		printf("1. Push Operation\n");
		printf("2. Display\n");
		printf("3. Pop Operation\n");
		printf("4. Exit\n");
		while(ch){
			printf("Enter your Choice: ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
				//printf("Pushing elements in stack\n");
					if(top>=size-1){
						printf("Stack Overflow\n\n");
					}
					else{
						printf("Enter the element\n");
						scanf("%d",&value);
						top++;
						stack[top]=value;
						printf("Element at top of the stack is %d\n\n",stack[top]);
					}
					break;
				case 2:
					if(top<0)
						printf("Stack is Empty");
					else{
						printf("Elements in the stack are\n\n");
						for(i=top;i>=0;i--){
							printf("%d\n",stack[i]);
						}
					}
					break;
				case 3:
					if(top<0)
						printf("\nStack Underflow\n");
						else{
							value=stack[top];
							top--;
							printf("%d is popped\n",value);
						}
					break;
				case 4:
					printf("Exiting....\n");
					exit(0);					
					break;
				default:
					printf("Invalid Choice");
					break;	
			}

		}
	}

