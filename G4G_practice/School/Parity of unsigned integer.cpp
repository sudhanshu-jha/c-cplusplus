/*
Given an unsigned integer, find it's parity. Parity of a number refers to whether it contains an odd or even number of 1-bits. The number has “odd parity”, if it contains odd number of 1-bits and is “even parity” if it contains even number of 1-bits.

Input:

2
13
9
Output:

odd
even

Constraints:

1<=t<=100
1<=n<=100
Example:

n = 13 (1101)   parity = 0
n = 13 & 12  = 12 (1100)   parity = 1
n = 12 & 11 = 8  (1000)   parity = 0
n = 8 & 7 = 0  (0000)    parity = 1

*/

#include <iostream>
using namespace std;

int main() {
	int t,n,count;
	cin>>t;
	while(t--)
	{
	  count=0;
	  cin>>n;
	  while(n>0)
	  {
	      n=n&(n-1);
	      count++;     
	}
	if(count%2==0)
	cout<<"even"<<endl;
	else 
	cout<<"odd"<<endl;
	}
	return 0;
}
