#include<iostream>
using namespace std;

int main()
{


int n=5,A[100]={23,3,32,12,34},i,j,t;

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-i-1;j++)
        if(A[j]>A[j+1])
    {
        t=A[j];
        A[j]=A[j+1];
        A[j+1]=t;

    }
}
cout<<endl;
for(i=0;i<n;i++)
{cout<<A[i]<<endl;
}}
