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
	
   int x = 0, y = 1, z = 0;
	
   for (int i = 0; i < num; i++) 
   {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
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
