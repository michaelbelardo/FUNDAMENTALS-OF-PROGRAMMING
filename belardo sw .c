/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int grade;
    printf("enter you grade (0-100) ");
    scanf("%d" , &grade);
    
    switch (grade / 10) {
        case 10:
        case 9:
        printf("grade: A\n");
        break;
        case 8:
        printf("grade: B\n");
        break;
        case 7:
        case 6:
        printf("grade: C\n");
        break;
        default:
        printf("grade: failed\n");
        break;
    }

    return 0;
}
