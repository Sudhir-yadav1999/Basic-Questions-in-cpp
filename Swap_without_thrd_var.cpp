----------------------
Swap two no without using 3rd variable
----------------------
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int a,b;
	cout<<"Enter the two numbers to be swapped :";
	cin>>a;
	cin>>b;
	cout<<"a"<<a<<" "<<"b"<<b<<" "<<endl;
	
	a=a+b;//17
	b=a-b;//7
	a=a-b;//10
	cout<<"a"<<a<<" "<<"b"<<b<<" ";
	

	return 0;
}
