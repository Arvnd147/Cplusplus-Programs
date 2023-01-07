#include<stdio.h>
int main()
{
    int A, B;
    printf("Enter the value of A: ");
    scanf("%d", &A);
    
    printf("Enter the value of B: ");
    scanf("%d", &B);

    printf("\nThe value of A before swap: %d", A);
    printf("\nThe value of B before swap: %d", B);

    A=A+B;
    B=A-B;
    A=A-B;
    
    printf("\n\nThe value of A after swap: %d", A);
    printf("\nThe value of B after swap: %d", B);
}