/*
Print numbers from 1 to n without the help of loops.

Input: 
The first line of the input contains T denoting the number of testcases. First line of test case contain number n.

Output: 
Numbers from 1 to n will be printed.

Constraints:

1 <=T<= 100
1 <=N<= 990

Example:

Input:

1
10

Output:

1 2 3 4 5 6 7 8 9 10

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    i=1;
	    cin>>n;
	    start:
	    cout<<i<<" ";
	    i++;
	    if(i<=n)
	    goto start;
	    cout<<endl;
	}
	return 0;
}
