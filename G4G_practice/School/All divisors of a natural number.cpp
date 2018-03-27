/*
Given a natural number n, print all distinct divisors of it including 1 and the number itself.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, N is the number whose divisors are to be printed.

Output:
All the divisors of the given number including 1 and the number itself are displayed in a line with a single space between them in an increasing order.

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
1 2 4 5 10 20 25 50 100
1 2 5 10
1 5 25 125

*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        if(n%i==0)
	        printf("%d ",i);
	    }
	    cout<<endl;
	}
	return 0;
}
