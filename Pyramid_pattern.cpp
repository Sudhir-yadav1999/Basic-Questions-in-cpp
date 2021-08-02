#include<bits/stdc++.h>
using namespace std;
 
int main ()
{
   
   //print pattern 
   int rows;
   cout<<"Enter the no of rows you want to print pyramid :"<<endl;
   cin>>rows;
   
   for(int i=1;i<=rows;i++)
   {
       
       for(int k=i;k<=rows;k++)
       {
       cout<<" ";    
       }
       
       for(int j=1;j<=2*i-1;j++)
       {
           cout<<"*";
       }
       cout<<"\n";
       
   }
   
   
    return 0;
}
