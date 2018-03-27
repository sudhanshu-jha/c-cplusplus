/*
Calculate the sum of all the multiples of 3 or 7 below the natural number N.

Input:

First line contains T that denotes the number of test cases. This is followed by T lines, each containing an integer, N.
Output:
For each test case, print an integer that denotes the sum of all the multiples of 3 or 7 below N.

Constraints:

1 ≤ T ≤ 50
1 ≤ N ≤ 1000000

Example:

Input:

2
10
20

Output:
25
84

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	long long int sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    for(int i=1;i<n;i++)
	    {
	        if(i%3==0 || i%7==0)
	        sum=sum+i;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
