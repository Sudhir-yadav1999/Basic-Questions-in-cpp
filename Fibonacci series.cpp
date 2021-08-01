---------------------------------------
Iterative Approach for fibonacci series
---------------------------------------
=========================================================
                          fib(5)   
                    /                \
               fib(4)                fib(3)   
             /        \              /       \ 
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)
==========================================================	
#include<bits/stdc++.h>
using namespace std;
 
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2); 
}
 
int main ()
{
    int n = 5;
    cout << fib(n);
    
    return 0;
}
--------------------------------------
--------------------------------------
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
