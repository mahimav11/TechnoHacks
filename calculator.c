// C Program to make a Simple Calculator
// Using switch case
//author:mahima
#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
	char ch; //operator
	double a, b; //operands
	while (1) {
		printf("Enter an operator (+, -, *, /), "
			"[press q to quit calculator]: "); //iterated menu
		scanf(" %c", &ch); //choice for operation

		// to exit
		if (ch == 'q') //quitting calculator
			exit(0);
		printf("Enter two first and second operand: "); //user input
		scanf("%lf %lf", &a, &b); 

		
		switch (ch) { //performing actual operations according to user choice

		// For Addition
		case '+':
			printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
			break;

		// For Subtraction
		case '-':
			printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
			break;

		// For Multiplication
		case '*':
			printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
			break;

		// For Division
		case '/':
		if(b==0){
			printf("result undefined");
		}
		else{
   				printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
			}
			
			break;

		// If operator doesn't match any case constant
		default:
			printf("Error! please write a valid operator\n");
		}

		printf("\n"); //new operation on new line
	}
}
