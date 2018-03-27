/*
Given an array of N size. The task is to rotate array by d elements where d is less than or equal to N.

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of three lines. The first line of each test case consists of an integer N, where N is the size of array.
The second line of each test case contains N space separated integers denoting array elements. The third line of each test case contains "d" .

Output:

Corresponding to each test case, in a new line, print the modified array.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 200
1 ≤ A[i] ≤ 1000

Example:

Input

1
5
1 2 3 4 5
2

Output
3 4 5 1 2

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,n,d,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    cin>>d;
	    for(i=0;i<n;i++)
	    if(i+d<n)
	    a[i]=b[(i+d)];
	    else
	    a[i]=b[(i+d)%n];
	    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
