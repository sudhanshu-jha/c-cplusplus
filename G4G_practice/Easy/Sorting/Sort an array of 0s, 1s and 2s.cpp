/*
Write a program to sort an array of 0's,1's and 2's in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, First line is number of elements in array 'N' and second its values.

Output: 
Print the sorted array of 0's, 1's and 2's.

Constraints: 

1 <= T <= 100
1 <= N <= 100
0 <= arr[i] <= 2

Example:

Input :

2
5
0 2 1 2 0
3
0 1 0
 

Output:

0 0 1 2 2
0 0 1

*/

#include<iostream>
using namespace std;
int main()
 {
	short t,n,i,zc,oc;
	cin>>t;
	while(t--)
	{
	    zc=oc=0;
	    cin>>n;
	    short a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        zc++;
	        if(a[i]==1)
	        oc++;
	    }
	    for(i=0;i<zc;i++)
	    a[i]=0;
	    for(i=zc;i<zc+oc;i++)
	    a[i]=1;
	    for(i=zc+oc;i<n;i++)
	    a[i]=2;
	    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
