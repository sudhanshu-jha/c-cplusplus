/*
Given an array of size n, rotate it by d elements. 

Input: The first line of the input contains T denoting the number of testcases. First line of test case is the number of elements 'n' and elements 'd' to be rotated. Second line of test case will be the array elements.
Output: Rotated array is displayed to the user.


Constraints:

1 <=T<= 50
1 <=n<= 100
d<=n
1 <=arr[i]<= 100


Example:

Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,d,i;
	cin>>t;
	while(t--)
	{
	    cin>>n>>d;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    b[n]=a[n];
	    for(i=0;i<n;i++)
	    b[i]=a[(i+d)%n];
	    for(i=0;i<n;i++)
	    cout<<b[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
