#include<stdio.h>
int main()
{
    // This program checks if a number is even or odd.
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%2==0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;

}