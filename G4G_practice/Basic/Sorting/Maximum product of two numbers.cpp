/*
Given an array with all elements greater than or equal to zero.Return the maximum product of two numbers possible.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, N is size of array.
The second line of each test case contains N input A[i].

Output:

Print the maximum product of two numbers possible.

Constraints:

1 ≤ T ≤ 20
2 ≤ N ≤ 50
0 ≤ A[i] ≤ 1000

Example:

Input
1
5
1 100 42 4 23

Output
4200

*/

#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    cout<<a[n-1]*a[n-2]<<endl;
	}
	return 0;
}
