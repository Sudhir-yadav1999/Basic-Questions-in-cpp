---------------------
Multiply two matrix 
---------------------
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int arr2[10][10],arr1[10][10],arr3[10][10];
	int r,c;
	cout<<"Enter the no of rows of matrix ";
	cin>>r;
	cout<<"Enter the no of col of matrix ";
	cin>>c;
	cout<<"Enter the elements in the matrix";
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	//multiply
	
	for(int i=0;i<r;i++)
	{
		
		for(int j=0;j<c;j++)
		{  arr3[i][j]=0;
			for(int k=0;k<c;k++)
			{
				arr3[i][j]+=arr1[i][k]*arr2[k][j];	
			}
		
		}
	}
	
	//display
		for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<arr3[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
