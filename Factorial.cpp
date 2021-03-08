

----------------------
  Factorial
----------------------
#include<bits/stdc++.h>

using namespace std;
	

int main()
{
int fact;
cout<<"Factorial program :";
cin>>fact;
int sum=1;
for(int i=1;i<=fact;i++)
{
	sum=sum*i;
}
cout<<sum;

	return 0;
}
-------------------------
  Recursion
-------------------------
#include<bits/stdc++.h>

using namespace std;

int factori(int n)
{
	if(n==0)
	{
		return 1;
		
	}
	else if(n<0)
	{
		return -1;//wrong value 
	}

	
		return (n*factori(n-1));
	
}

int main()
{
int fact;
cout<<"Factorial program :";
cin>>fact;

int value=factori(fact);

cout<<value;

	return 0;
}
