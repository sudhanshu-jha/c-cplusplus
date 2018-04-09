/*
Given a sorted array C[] and a number X, write a function that counts the occurrences of X in C[].

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and X, N is the size of array.
The second line of each test case contains N input C[i].

Output:

Print the counts the occurrence of X, if zero then print -1.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 300
1 ≤ C[i] ≤ 500

Example:

Input:
2
7 2
1 1 2 2 2 2 3
7 4
1 1 2 2 2 2 3

Output:
4
-1

Explanation:
In first test case, 2 occurs 4 times in 1 1 2 2 2 2 3
In second test case, 4 is not present in 1 1 2 2 2 2 3

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,x,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n>>x;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==x)
	        count++;
	   }
	if(count>0)
	cout<<count<<endl;
	else
	cout<<"-1"<<endl;
	}
	return 0;
}
