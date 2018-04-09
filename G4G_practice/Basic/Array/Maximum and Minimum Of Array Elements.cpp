/*
Given an array, find maximum and minimum elements from the array.

Input:

The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

Output:

Print the maximum and minimum element in a single line with space in between.

Constraints:

1 ≤ T ≤ 30

1 ≤ N ≤ 100

0 ≤A[i]<100

Example:

Input:
2
4
5 4 2 1
1
8

Output:
5 1
8 8

*/

#include<iostream>
#include<algorithm>
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
	    sort(a,a+n);
	    cout<<a[n-1]<<" "<<a[0]<<endl;
	}
	return 0;
}
