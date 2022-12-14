#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program (int a, int b);

typedef int (*Operation) (int a, int b);
Operation op[5];

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a = 5;
	int b = 7;
	int operand;
	char equation[10];
	op[0] = &add;
	op[1] = &subtract;
	op[2] = &multiply;
	op[3] = &divide;
	op[4] = &exit_program;

	while(1){
    printf("Value of A: %d \n Value of B : %d \n Choose the operation that you would wish to do \n **************** \n 0 : Addition \n **************** \n 1 : Subtraction \n **************** \n 2 : Multiplaction \n **************** \n 3: Division \n **************** \n 4 : Leave):", a, b);
    scanf("%s", equation);
    operand = atoi(equation);
    while (operand > 4) {
      printf("Choose the operation that you would wish to do \n **************** \n 0 : Addition \n **************** \n 1 : Subtraction \n **************** \n 2 : Multiplaction \n **************** \n 3: Division \n **************** \n 4 : Leave):");
      scanf("%s", equation); 
      operand = atoi(equation);
    }

		if (operand == 4){ 
      break; 
    }
		
		int answer = (*op[operand])(a, b);
		printf("x = %d\n", answer);
	}

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b;}
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b;}
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b;}
int exit_program (int a, int b) { exit(0);}

