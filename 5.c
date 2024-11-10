/* Stack using array

AIM

Write a c program to perform stack operations using array.

------------------------------------------------------------------------------------
ALGORITHM

Step  1: Start
Step  2: Declare integer array stack[] of size 5, top, i, value as global variable. Set top as -1. 
Step  3: In main function, declare variable ch of integer type.
Step  4: Display menu options 1 for push, 2 for display, 3 for pop stack and 4 to exit from the program.
Step  5: Loop the options  until user chooses to exit.
Step  6: Ask the user to enter the choice for above options.
step  7: Call push(), display(), pop()functions for options 1, 2, 3 respectively.
Step  8: If the choice is 4, exit the program.
Step  9: If any other choice print 'Invalid Choice' as error message.
Step  10: Stop

push()

Step  1: Start
Step  2: If top is greater than or equal to size - 1, print stack is overflow.
         Else, get the element from the user to the value, increment top by 1, 
         assign value to top of the stack and print element at top of the stack.
Step  3: Stop

display()

Step  1: Start
Step  2: If top is less than 0, print stack is empty.
         Else, print elements from top of the stack to element at index 0.
Step  3: Stop

pop()

Step  1: Start
Step  2: If top is less than 0, print stack is underflow.
         Else, delete element from top of the stack, decrement top by 1 and print element is popped.
Step  3: Stop
------------------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
int stack[5],size=5,top=-1,i,value;
	void push();
	void display();
	void pop();
	void push(){
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
	}
	void display(){
		if(top<0)
			printf("Stack is Empty\n");
		else{
			printf("Elements in the stack are\n\n");
				for(i=top;i>=0;i--){
					printf("%d\n",stack[i]);
				}
		}
	}
	void pop(){
		if(top<0)
			printf("\nStack Underflow\n");
		else{
			value=stack[top];
			top--;
			printf("%d is popped\n",value);
		}
	}
	void main(){
		int ch;
		printf("1. Push Operation\n");
		printf("2. Display\n");
		printf("3. Pop Operation\n");
		printf("4. Exit\n");
		do{
			printf("Enter your Choice: ");
			scanf("%d",&ch);
			switch(ch){
				case 1:
					push();
					break;
				case 2:
					display();
					break;
				case 3:
					pop();
					break;
				case 4:
					printf("Exiting....\n");
					exit(0);					
					break;
				default:
					printf("Invalid Choice\n");
					break;	
			}

		}while(ch!=4);
	}

/*-------------------------------------------------------------------------------------------------------------------------------

OUTPUT

1. Push Operation
2. Display
3. Pop Operation
4. Exit
Enter your Choice: 1
Enter the element
1
Element at top of the stack is 1
Enter your Choice: 1
Enter the element
2
Element at top of the stack is 2
Enter your Choice: 1
Enter the element
3
Element at top of the stack is 3
Enter your Choice: 2
Elements in the stack are
3
2
1
Enter your Choice: 3
3 is popped
Enter your Choice: 3
2 is popped
Enter your Choice: 3
1 is popped
Enter your Choice: 3
Stack Underflow
Enter your Choice: 2
Stack is Empty
Enter your Choice: 4
Exiting....

RESULT

Program executed successfully and output is verified.

------------------------------------------------------------------------------------------------------------------------------------*/