Prime number is a number that is greater than 1 and divided by 1 or itself. 
In other words, prime numbers can't be divided by other numbers than itself or 1. 
For example 2, 3, 5, 7, 11, 13, 17, 19, 23.... are the prime numbers.

--------------------
Prime no 
--------------------
#include<bits/stdc++.h>

using namespace std;
	

int main()
{

//prime no 
int num;
cout<<"Enter the no to be checked :";
cin>>num;

int r=num/2;
int flag=0;

for(int i=2;i<=r;i++)
{
if(num%i==0)//modulus gives reminder    
{
	cout<<"Not a prime no"<<endl;
	flag=1;
	break;
}

}
if(flag==0)
{
	cout<<"Number is a prime no "<<endl;
}
	return 0;
}
