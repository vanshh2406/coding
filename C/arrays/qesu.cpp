#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};

    int target;
    cin>>target;

    int temp[5];

    for(int i=4;i>0;i--)
    {
        for(int j=0;j<target;j++)
        {
            temp[j]=arr[i];
            i--;
        }


    }

    for(int i=0;i<2;i++)
    {
        cout<<temp[i]<<endl;
    }
}