/*
Given a stream of numbers, print average or mean of the stream at every point.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the size of array.
The second line of each test case contains N input C[i].

Output:

Print the average of the stream at every point (in integer).

Constraints:

1 ≤ T ≤ 20
1 ≤ N ≤ 50
1 ≤ C[i] ≤ 100

Example:

Input
2
5
10 20 30 40 50
2
12 2

Output
10 15 20 25 30
12 7

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,sum,avg;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	        avg=sum/(i+1);
	        cout<<avg<<" ";
	}
	cout<<endl;
	}
	return 0;
}
