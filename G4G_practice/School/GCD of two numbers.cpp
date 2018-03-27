/*
Given two numbers, find the GCD of those 2 numbers.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two space separated integers a and b.

Output:
Print the GCD of the two numbers.

Constraints:
1 <= T <= 100
1 <= a , b <= 1000

Example:
Input:
98 56
48 18
Output:
14
6

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t,a,b,max,i,gcd;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    max=a>b?a:b;
	    for(i=1;i<=max;i++)
	    if(a%i==0 && b%i==0)
	    gcd=i;
	    cout<<gcd<<endl;
	}
	return 0;
}
