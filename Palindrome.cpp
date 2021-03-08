#include<bits/stdc++.h>

using namespace std;
	

int main()
{
	// fibonacci series 
	int n;
	
	cout<<"Palindrome :";
	cin>>n;
	int temp=n;
	int r;
	int sum=0;
	while(n>0)
	{
		r=n%10;    //no =123 // r=3,2,1
		sum=(sum*10)+r;//sum=3, 30+2 , 320+1=321;
		n=n/10;//n=12,1,0
		
	}
	if(temp==sum)
	{
		cout<<"Is a palindrome :";
		
	}
	else
	{
		cout<<"Is not a palindrome :";
	}
	
	
	return 0;
}
