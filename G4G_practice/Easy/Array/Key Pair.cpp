/*
Given an array A[] of n numbers and another number x, determine whether or not there exist two elements in A whose sum is exactly x.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and X,N is the size of array.
The second line of each test case contains N integers representing array elements C[i].

Output:

Print "Yes" if there exist two elements in A whose sum is exactly x, else "No" without quotes.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 200
1 ≤ C[i] ≤ 1000

Example:

Input:
2
6 16
1 4 45 6 10 8
5 10
1 2 4 3 6

Output:
Yes
Yes

*/

#include<iostream>
using namespace std;
int main()
 {
	short t,n,x,i,j;
	cin>>t;
	while(t--)
	{
	    bool flag=false;
	    cin>>n>>x;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        if(flag)
	        break;
	        for(j=0;j<n;j++)
	        if(i!=j && (a[i]+a[j])==x)
	        {
	            flag=true;
	            break;
	        }
	    }
	    if(flag)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
