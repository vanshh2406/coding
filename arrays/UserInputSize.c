#include<stdio.h>
int main()
{
    int n;
    printf("Give the Size of an Array:");
    scanf("%d",&n);
     int a[n];
     printf("Enter the Element of Array:");
     for(int i=0;i<=n-1;i++)
     {
     scanf("%d",&a[i]);
     }
     printf("The given Array is: ");
      for(int i=0;i<=n-1;i++)
    {
    printf("%d ",a[i]);
    }
    return 0;

} 