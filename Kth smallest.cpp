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
Using Map 


#include<bits/stdc++.h>

using namespace std;

int kthSmallest(map<int,int> mp,int k)
{
	int freq=0;
	map<int,int> ::iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	{
	freq += (it->second); //sum of second occurance 
	
	if(freq >=k)
	{
	return it->first;	
	}
		
	}
	
	return -1;
	
}



int main()
{
  
  int vt[]={12,3,5,7,19}; 
  
  int k=2;
  
  map<int,int> mp;
  
  for(int i=0;i<5;i++)
  {
  	mp[vt[i]]++; // m[vt[i]] +=1; // add to map
  }
  int ans= kthSmallest(mp,k); 
  cout<<ans<<endl;
    return 0;
}

















