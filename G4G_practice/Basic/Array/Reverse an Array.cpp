/*
Given an array, print reverse of it.

Input:

First line contains an integer, the number of test cases 'T' Each test case should contain an integer, size of array 'N' in the first line. In the second line Input the integer elements of the array in a single line separated by space.

Output:

Print the array in reverse order in a single line separated by space.Each array is to be printed in separate line.

Constraints:

1 <= T <= 100

1 <= N <=100

0 <= Arr[i] <= 100

Example:

Input
1
4
1 2 3 4

Output:
4 3 2 1

*/

#include<iostream>
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
	    for(i=n-1;i>=0;i--)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
