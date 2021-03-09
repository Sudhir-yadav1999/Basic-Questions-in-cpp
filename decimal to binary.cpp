Decimal to Binary Conversion Algorithm
---------------------------------------
Step 1: Divide the number by 2 through % (modulus operator) and store the remainder in array

Step 2: Divide the number by 2 through / (division operator)

Step 3: Repeat the step 2 until the number is greater than zero

-----------------------
Decimal to Binary 
-----------------------
#include<bits/stdc++.h>

using namespace std;


int main()
{
	
	int n;
	cout<<"Enter the no to convert to binary no "<<endl;
	cin>>n;
	int a[20];
	int i;
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
		//cout<<a[i];
	}
	for(i=i-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
