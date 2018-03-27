/*
For a given number N. Print the pattern in the following form: 1 121 12321 1234321 for N=4.

Input:
First line of input contains the test cases T. Each line of test case contain the value of N for which the pattern is to be displayed.

Output:
For each value of N, print the pattern in a single line.

Constraints:
1<= T <=10
1<= N <= 20

Example:
Input:
2
3
6

Output:
1 121 12321
1 121 12321 1234321 123454321 12345654321

*/

#include<iostream>
using namespace std;

int main()
 {
	//code
	int t,n,i,j,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(k=1;k<=n;k++)
	    {
	    for(i=1;i<=k;i++)
	    cout<<i;
	    for(j=k-1;j>0;j--)
	    cout<<j;
	    cout<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
