--------------------------
find the hcf of two number 
--------------------------
#include<bits/stdc++.h>
using namespace std;
 
int hcf(int a,int b)
{
    //divides to 0
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }
    
    //both are equal
    if(a==b)
    {
        return a;
    }
    
    if(a>b)
    {
        return hcf(a-b,b);
    }
    return hcf(a,b-a);
    
}
 
int main ()
{
   
  //highest common factor of two no 
  int a,b;
  cout<<"Enter a :"<<endl;
  cin>>a;
  cout<<"Enter b :"<<endl;
  cin>>b;
  
  cout<<hcf(a,b)<<endl;
   
   
   
   
    return 0;
}
-------------------------------------------------------------------------------------
Calculate lcm :- LCM(a,b)*hcf(a,b)=a*b;
-------------------------------------------------------------------------------------

int lcm(int a,int b)
{
return (a/hcf(a,b))*b;
}

--------------------------------------------------------------------------------------
LCM OF ARRAY OF ELEMENTS
--------------------------------------------------------------------------------------
 
#include<iostream>

using namespace std;

int hcf(int no1,int no2)
{
	if(no1==0)
	{
		return no2;
	}
	if(no2==0)
	{
		return no1;
	}
	
	if(no1>no2)
	{
		return hcf(no1-no2,no2);
	}
	
	
	return hcf(no1,no2-no1);
}

int lcm1(int arr[],int n)
{
	int ans=arr[0];
	for(int i=1;i<n;i++)
	{
		ans= ((arr[i]*ans)/hcf(arr[i],ans));
	}
	return ans;
}

int main()
{

	int arr[]={2,7,3,9,4};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	cout<<lcm1(arr,n);
	return 0;
}
