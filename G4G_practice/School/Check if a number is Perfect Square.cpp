/*
Given a natural number n, print 1 if it is perfect square else 0.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, N is the number to be checked whether perfect square or not.

Output:
1 if it is perfect square else 0 

Constraints:
1 <= T <= 30
1 <= N <= 100000

Example:
Input:
3
100
10
125

Output:
1
0
0

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	//code
	int t,n,c;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    c=(int) sqrt(n);
	    if(c*c==n)
	    cout<<"1"<<endl;
	    else 
	    cout<<"0"<<endl;
	}
	return 0;
}
