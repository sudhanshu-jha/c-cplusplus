/*
Given a Binary Number, Print its decimal equivalent.
 

Input:

The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. Each test case contains a single Binary number. 
 

Output: 

Print each Decimal number in new line.
 

Constraints:

1< T <100
1<=Digits in Binary<=8
 

Example:

1
10001000
136

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t,n,sum,i,d;
	cin>>t;
	while(t--)
	{
	    sum=i=0;
	    cin>>n;
	    while(n)
	    {
	        d=n%10;
	        sum=sum+d*pow(2,i);
	        n=n/10;
	        i++;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
