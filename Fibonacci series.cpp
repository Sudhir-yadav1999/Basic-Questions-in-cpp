---------------------------------------
Iterative Approach for fibonacci series
---------------------------------------
#include<bits/stdc++.h>

using namespace std;
int main()
{
	// fibonacci series 
	int n;
	
	cout<<"Enter the no till which fibonacci you want to print";
	cin>>n;
	int n1=0,n2=1,n3;
	
	for(int i=0;i<=n;i++)
	{
		if(i==0)
		{
			cout<<n1<<endl;
		}
		else if(i==1)
		{
		cout<<n2<<endl;	
		}
		else
		{
			n3=n1+n2;
			cout<<n3<<endl;
			n1=n2;
			n2=n3;
		}
	
	
		
	}
	
	return 0;
}
------------------------------------------
Recursion 
------------------------------------------

#include<bits/stdc++.h>

using namespace std;

int fibonac(int n)
{
 static int n1=0,n2=1,n3;
if(n>0)
{
	n3=n1+n2;
	n1=n2;
	n2=n3;
	cout<<n3<<" ";
	fibonac(n-1);
}

	
}
int main()
{
	// fibonacci series 
	int n;
	
	cout<<"Enter the no till which fibonacci you want to print";
	cin>>n;
	
	cout<<"0"<<" "<<"1"<<" ";
	fibonac(n-2);
		
	
	
	return 0;
}
