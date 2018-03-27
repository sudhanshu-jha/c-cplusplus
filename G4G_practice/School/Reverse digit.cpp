/*
Write a program to reverse digits of a number.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:

Print the reverse digit of a N digit number.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 1000000000

Example:

Input:
2
200
122

Output:
2
221

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,n,d,r;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    r=0;
	    while(n>0)
	    {
	        d=n%10;
	        r=r*10+d;
	        n=n/10;
	    }
	    cout<<r<<endl;
	}
	return 0;
}
