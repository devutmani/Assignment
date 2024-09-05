#include<stdio.h>

int main() 
{
    int a,b, temp;

    // Taking input from the user 
    printf("Enter the first number: \n");
    scanf("%d", &a);

    printf("Enter the second number: \n");
    scanf("%d",&b);

    // Show the values before swapping 
    printf("\nBefore swapping: a=%d, b=%d\n",a,b);

    //Swapping the values
    temp = a;
    a=b;
    b=temp;

    //Display values after swapping
    printf("After Swapping: a= %d, b=%d\n",a,b);
    return 0;

}