/*
Write a program to print Binary representation of a given number.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:

Print binary representation of a number in 14 bits.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 5000

Example:

Input:

2
2
5

Output:

00000000000010
00000000000101

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=13;i>=0;i--)
	    cout<<((n>>i)&1);
	    cout<<endl;
	}
	return 0;
}
