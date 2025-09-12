/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
   float num1, num2;
   
   printf("enter number:");
   scanf("%f" , &num1);
   
   printf("enter number:");
   scanf("%f" , &num2);
   
   printf("\n--- calculations ---\n");
   printf("addition: %.2f\n" , num1 + num2);
   printf("subtraction: %.2f\n" , num1 - num2); 
   printf("multiplication: %.2f\n" , num1 * num2);
   printf("division: %2f\n" , num1 / num2);
   printf("remainder: %d\n" , (int)num1 % (int)num2);
   printf
   ("\n------THANK YOU MS.ROMA------\n");
    return 0;
}