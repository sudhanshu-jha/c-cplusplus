/*
Given a number N. Write a program to the find number of diagonals possible in N sided convex polygon.

Input:
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains a single integer N.

Output:
For each test case print number of diagonals possible in N sided convex polygon.

Constraints:
1<=T<=100
3<N<=104

Example:
Input:
2
5
6
Output:
5
9

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
	    cout<<(n*(n-3))/2<<endl;
	}
	return 0;
}
