/*
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
ALGORITHM

Step 1: Start
Step 2: Declare  num1, num2 as global variables.
Step 3: Under main function, display a menu having options 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Divison and 5 to exit from program.
Step 4: Loop the options  until user chooses to exit.
Step 5: Ask the user to enter the choice for above options.
Step 6: If the choice is not 5, Call the function getNumbers() to read two numbers. Else, exit the program.
Step 7: Call sum(),difference(),product(),divison() functions for options 1,2,3,4 respectively.
Step 8: If any other choice print 'Invalid Choice' as error message.
Step 9: Stop

function getNumbers()
Step 1: Start
Step 2: Read two numbers as num1 and num2 from the user.
Step 3: Stop

function sum(int x, int y)
Step 1: Start
Step 2: Accept num1, num2 as parameters for this function (int x, int y) 
Step 3: Add x and y and store the value to the variable result.
Step 4: Print result as sum.
Step 5: Stop

function difference(int x, int y)
Step 1: Start
Step 2: Accept num1, num2 as parameters for this function (int x, int y) 
Step 3: Subtract y from x and store the value to the variable result.
Step 4: Print result as difference.
Step 5: Stop

function product(int x, int y)
Step 1: Start
Step 2: Accept num1, num2 as parameters for this function (int x, int y)  
Step 3: Multiply x and y and store the value to the variable result.
Step 4: Print result as product.
Step 5: Stop

function division(int x, int y)
Step 1: Start
Step 2: Accept num1, num2 as parameters for this function (int x, int y) 
Step 3: Declare variables a, b, result of float data type.
Step 4: Store float value of x to a and float value of y to b.
Step 5: If y is zero, print divison by zero is not possible and goto step 8. Else, go step 6.
Step 6: Divide a by b and store value to variable result.
Step 7: Print result
Step 8: Stop

--------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/


#include <stdio.h>


int num1,num2;

void getNumbers();
void getNumbers(){

    printf("Enter two numbers:\n");
    scanf("%d %d",&num1,&num2);

}
void sum(int,int);
void difference(int,int);
void product(int,int);
void division(int,int);
void sum(int x,int y){
	
    int result=x+y;
    printf("Sum is %d\n",result);

}

void difference(int x,int y){
	
    int result=x-y;
    printf("Difference is %d\n",result);

}

void product(int x,int y){

    int result=x*y;
    printf("Product is %d\n",result);

}
void division(int x,int y){
	float a,b;
	a=(float)x;
	b=(float)y;
	if(y==0)
		printf("Divison by zero is not possible\n");
    else{

		float result=a/b;
    	printf("Result is %.3f\n",result);

	}


}

void main(){
	int choice;
	printf("Menu\n1 To perform Addition\n2 To perform Subtraction\n3 To perform Multiplication\n4 To perform Division\n5 To exit from the program\n");
	do{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
                getNumbers();
				sum(num1,num2);
				break;
			case 2:
                getNumbers();
				difference(num1,num2);
				break;
			case 3:
                getNumbers();
				product(num1,num2);
				break;
			case 4:
                getNumbers();
				division(num1,num2);
				break;
            case 5:
				printf("Exiting ! ! !");
                break;
			default:
				printf("Invalid Choice\n");
				break;
		}
	}while(choice!=5);
	
}

