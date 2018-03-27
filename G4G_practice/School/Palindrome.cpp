/*
Given an integer, check whether it is a palindrome or not.
Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line. The first line of each test case contains a single integer N to be checked for palindrome.

Output:
Print "Yes" or "No" (without quotes) depending on whether the number is palindrome or not.

Constraints:
1 <= T <= 1000
1 <= N <= 10000

Example:
Input:
3
6
167
55555

Output:
Yes
No
Yes

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,n,d,r=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int num=n;
	    r=0;
	    while(n>0)
	    {
	        d=n%10;
	        r=r*10+d;
	        n=n/10;
	    }
	    if(r==num)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
