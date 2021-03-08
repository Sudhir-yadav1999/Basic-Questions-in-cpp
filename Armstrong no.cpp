Armstrong number is a number that is equal to the sum of cubes of its digits.
=----------------------------
371 = (3*3*3)+(7*7*7)+(1*1*1)
  
-----------------------------
  Armstrong No
-----------------------------
#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	int no;
	cout<<"Armstrong no :";
	cin>>no;
	
	int temp=no;
	int rem;
	int cubic;
	int sum=0;
	while(no>0)
	{
		rem=no%10;//last no 
		cubic=rem*rem*rem;
		sum=sum+cubic;
		no=no/10;
	}
	
	if(temp==sum)
	{
		cout<<"Number is a Armstrong no ";
		
	}
	else 
	{
		cout<<"Number is not a Armstrong no";
	}
	

	return 0;
}
