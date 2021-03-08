
NUMBER := 23  
 Sum is= 5 (2+3)
---------------------------
Sum of digits 
---------------------------
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int no;
cout<<"Sum of the digits :";

cin>>no;
int rem;
int sum=0;
while(no>0)
{
	rem=no%10;
	 sum=sum+rem;
	
	no=no/10;
}
	cout<<sum;

	return 0;
}
