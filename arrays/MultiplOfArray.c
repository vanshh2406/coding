#include<stdio.h>
int main()
{
    int i,a[6],multiply = 1;
    printf("Enter the element of array: ");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The multiplication the element of the array is: ");
for(i=0;i<=5;i++)
{
    multiply = multiply*a[i];
}
printf("%d",multiply);
    return 0;
}
