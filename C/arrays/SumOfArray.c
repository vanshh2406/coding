#include<stdio.h>
int main()
{
    int i,a[5] = {2,4,6,8,1},sum = 0;
    for(i=0;i<=4;i++)
{
sum = sum + a[i];
}
printf("%d",sum);

    return 0;

}