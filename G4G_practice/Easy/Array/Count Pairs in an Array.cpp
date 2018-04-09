/*
Given an array of integers arr[0..n-1], count all pairs (arr[i], arr[j]) in it such that i*arr[i] > j*arr[j], 0 =< i < j < n.

Example:

Input: arr[] = {5, 0, 10, 2, 4, 1, 6}

Output: 5

Explanation:

Pairs which hold condition i*arr[i] > j*arr[j] are
(10, 2) (10, 4) (10, 1) (2, 1) (4, 1)
Input:

The first line of input contains T denoting the no. of test cases . Then T test cases follow . The first line of each test case contains an Integer N and the next line contains N space separated values of the array A[ ] .


Output:

For each test case output the required result in a new line.


Constraints:

1<=T<=100
1<=N<=100
1<=A[ ] <=1000


Example:

Input:

2
7
5 0 10 2 4 1 6
4
8 4 2 1

Output:

5
2

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,j,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	        for(j=i+1;j<n;j++)
	        if(i!=j && (i*a[i])>(j*a[j]))
	        count++;
	        cout<<count<<endl;
	}
	return 0;
}

