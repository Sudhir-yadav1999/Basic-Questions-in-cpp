
Logic:
 --> (2^0) * remainder+ (2^1)* remainder +2^2 ...2^3 

                                          1    0    0    1
                                         2^3  2^2  2^1  2^0
--------------------------------
Binary to Decimal
--------------------------------
#include<bits/stdc++.h>

using namespace std;

int binary_to_decimal(int n)
{
	int i=0;
	int remainder=0;
	int decimal=0;
	while(n!=0)
	{
		remainder=n%10;//last digit
		n=n/10; //front digits of binary
		decimal =decimal+remainder*pow(2,i); //(2^0) * remainder+ (2^1)* remainder +2^2 ...2^3 
	    ++i;
	}
	
	cout<<"Decimal Conversion of the no is :"<<decimal;
}

int main()
{
	
int n;
cout<<"Enter the Binary no :";
cin>>n;

binary_to_decimal(n);
	
	
	return 0;
}
