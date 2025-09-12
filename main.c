/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int grade;
    
    printf("enter grade: ");
    scanf("%d ", &grade);
    
    
    if(grade >= 75 && grade <= 100) {
        printf("passed\n");
    }
    else if(grade > +50 && grade <= 74) {
        printf("failed\n");
    }
    else {
        printf("invalid\n");
    }    
    
    return 0;
}