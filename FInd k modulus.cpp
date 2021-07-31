
Finding the modulus of the value arr[0,1,2,3,4,5] % k=1,2,3,4.......largest elementin array. arr[0,1,2,3,4]% k=1,k=2.. .Find the sum of no where,

arr[0]%k==arr[1]%k==arr[2]%k 


#include <stdio.h>
#include<iostream>
using namespace std;


int main()
{
    
int arr[10]={4,10,40,28,16};

int n = sizeof(arr)/sizeof(arr[0]);

int large=arr[0];

for(int i=0;i<n;i++)
{
 if(arr[i] > large)
 {
     large=arr[i];
     
 }
    
}


int j;
int i;
int sum=0;

for(i=2;i<large;i++)
{
    
    
    for(j=0; j< n;j++)
    {
        if(arr[j+1]!=0)
        {
        if(arr[j]%i != arr[j+1]%i )
        {
            break;
        }
        }
    }
    
    if(j == n)
    {
        cout<<"The value of a is :"<<i<<endl;
        sum +=i;
    }
    
    
}

cout<<sum;

    return 0;
}
