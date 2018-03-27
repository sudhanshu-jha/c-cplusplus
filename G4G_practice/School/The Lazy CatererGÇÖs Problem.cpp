/*
Given an integer N, denoting the number of cuts that can be made on a pancake, find the maximum number of pieces that can be formed by making N cuts.

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of an integer N.

Output:

Corresponding to each test case, in a new line, print the maximum number of pieces that can be formed by making N cuts .

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 1000

Example:

Input
2
5
3

Output
16

7
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
	    cout<<(n+1)*n/2+1<<endl;
	}
	return 0;
}
