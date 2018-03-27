/*
Given a positive integer N and a prime p, the task is to print the largest power of prime p that divides N!. Here N! means the factorial of N = 1 x 2 x 3 . . (N-1) x N.
Note that the largest power may be 0 too.


Input: 
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing a positive integer N and a prime p.


Output:
Corresponding to each test case, in a new line, print the largest power of prime p that divides N .


Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100000
2 ≤5000 ≤p

Example:
Input
3
62 7
76 2
3 5

Output
9
73
0

*/

#include<iostream>
using namespace std;

int largestpow(int n,int p)
{
    int sum=0;
    while(n)
    {
        n=n/p;
        sum+=n;
    }
    return sum;
}

int main()
 {
	int t,n,p;
	cin>>t;
	while(t--)
	{
	    cin>>n>>p;
	    cout<<largestpow(n,p)<<endl;
	  }
	return 0;
}
