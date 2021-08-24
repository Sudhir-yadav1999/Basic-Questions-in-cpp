---------------------------------------
K’th Smallest/Largest Element using STL
---------------------------------------
Given an array and a number k where k is smaller than size of array
we need to find the k’th smallest element in the given array.
  
#include<bits/stdc++.h>

using namespace std;

int main()
{
   
  int arr[]={5,6,7,12,34,54,67,121,1};
  int size=sizeof(arr)/sizeof(arr[0]);
  int k=2;
  set<int> s;
  for(int i=0;i<size;i++)
  {
      s.insert(arr[i]);
  }
  
  set<int> :: iterator itr;
  
  itr=s.begin();
  for(int i=0;i<k-1;i++)
  {
      itr++;
  }
  cout<<"THE VALUE OF ITR = "<<*itr;
  

    return 0;
}
------------------------------------------------------------------

















