/*
Given three distinct numbers, find the number with value in middle (Try to do it with minimum comparisons).

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain three distinct numbers a, b and c.


Output:
Print middle of three numbers.


Constraints: 
1<=T<=30
-1000<=a, b, c<=1000

Example:
Input:
2
20 30 40
12 32 11

Output:
30
12

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if((b<a && a<c) || (c<a && a<b))
	    cout<<a<<endl;
	    else if((a<b && b<c) || (c<b && b<a))
	    cout<<b<<endl;
	    else
	    cout<<c<<endl;
	}
	return 0;
}
