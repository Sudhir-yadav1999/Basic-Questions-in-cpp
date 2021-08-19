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

