/*
Given an array A[] having n positive elements. The task to create another array B[] such as B[i] is XOR of all elements of array A[] except A[i].

Examples:

Input : A[] = {2, 1, 5, 9}
Output : B[] = {13, 14, 10, 6}

Input : A[] = {2, 1, 3, 6}
Output : B[] = {4, 7, 5, 0}


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array (B[]).

Output:
For each test case in a new line print the space separated values of the new array (B[]). 

Constraints:
1<=T<=100
1<=N<=100
1<=A[]<=100

Example:
2
4
2 1 5 9
4
2 1 3 6
Output:
13 14 10 6
4 7 5 0

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],b[n]={0};
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    if(i!=j)
	    b[i]=b[i]^a[j];
	    for(i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
