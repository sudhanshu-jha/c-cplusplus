/*
Given an integer N, find sum of all digits of N.

Input:

The first line contains an integer T, total number of test cases. Then following T lines contains an integer N.

Output:

Calculate the sum of digits of N.

Constraints:

1 ≤ T ≤ 30

1 ≤ N ≤ 1000

Example:

Input
2
123
45

Output
6
9

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,d,sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    while(n)
	    {
	        d=n%10;
	        sum=sum+d;
	        n=n/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
