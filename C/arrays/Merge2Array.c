#include<stdio.h>
int main(){
    int arr1[5] = {0,1,2,3,4};
    int arr2[5] = {1,6,10,21,22};
    int arr3[10];
    int i = 0; // arr1
    int j = 0; //arr2
    int k = 0; //res
    while(i<=4 && j<=4){
        if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    else{
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    
}
// for remaining element 
    if(i==5){
        while(j<=4){ 
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    if(j==5){
        while(i<=4){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
    }
    printf("The sorted array is : ");
    for(int i=0;i<10;i++){
        printf("%d ",arr3[i]);
    }
}
        