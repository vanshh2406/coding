#include<stdio.h>
int main(){
    int a[10] = {9,2,1,5,7,3,6,4,5,20},temp;
    int M,N,P,F=0,R=0,pivot=4;

    {

    }
    int swap();
    {
        temp=a[N];
        a[N]=a[M];
        a[M]=temp;

    }
    main();
    {
    int x = 0;
    x=partition(a,P,R);
    printf("%d",x);
    }
    int partition(a,P,R);
    {
        P = a[P];
        M = P-1;
        N = R+1;
        while (N>M){
            M=M+1;
        }
        while (a[N]>=P)
        {
            M=M+1;
            N=N-1;
        }
        while (a[N]<P){
            N=N-1;
        }
        if(M<N)
        swap(a[M],a[N]);
        else return(N);
    }
}