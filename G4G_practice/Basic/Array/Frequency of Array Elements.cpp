/*
Given an unsorted array of N integers which can contain integers from 1 to N. Some elements can be repeated multiple times and some other elements can be absent from the array. Count frequency of all elements from 1 to N.

Input:

The first line contains an integer 'T' denoting the total number of test cases. In each test cases, the first line contains an integer 'N' denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:

For each test case output N space-separated integers denoting the frequency of each element from 1 to N.

Constraints:

1 ≤ T ≤ 100

1 ≤ N ≤ 100

Example:

Input:
2
5
2 3 2 3 5
4
3 3 3 3

Output:
0 2 2 0 1
0 0 4 0

*/

#include<iostream>
using namespace std;
int main()
 {
 	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif


	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    int a[n],c[n]={0};
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    for(int j=1;j<=n;j++)
	    if(a[i]==j)
	    c[j-1]=c[j-1]+1;
	    for(int i=0;i<n;i++)
	    cout<<c[i]<<" ";
	    cout<<endl;
	    	}
	return 0;
}
