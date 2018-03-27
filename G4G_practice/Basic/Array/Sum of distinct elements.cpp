/*
Find the sum of all non- repeated elements in an array.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N, N is the size of array.
The second line of each test case contains N input C[i].

Output:

Print the sum of all non-repeated elements.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 500
0 ≤ C[i] ≤ 1000

Example:

Input:
3
5
1 2 3 4 5
5
5 5 5 5 5
4
22 33 22 33

Output:
15
5
55

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findsum(int a[],int n)
{
    int sum=0;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.find(a[i])==s.end())
        {
        sum=sum+a[i];
        s.insert(a[i]);
        }
    }
    return sum;
}
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<findsum(a,n)<<endl;
	}
	return 0;
}
