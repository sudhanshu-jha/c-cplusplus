/*
Given an array, we need to find that element whose value is equal to that of its index value.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the size of array.
The second line of each test case contains N input A[].

Output:

Print that element whose value is equal to index value. Print "Not Found" when index value does not match with value.
Note: There can be more than one element in the array which have same value as their index. You need to print every such element's index separated by a single space. Follows 1-based indexing of the array. 


Constraints:

1 ≤ T ≤ 30
1 ≤ N ≤ 50
1 ≤ A[i] ≤ 1000

Example:

Input
2
5
15 2 45 12 7
1
1

Output
2
1

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,flag;
	cin>>t;
	while(t--)
	{
	    flag=1;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==i+1)
	        {
	            cout<<i+1<<" ";
	            flag=0;
	        }
	    }
	   if(flag)
	   cout<<"Not Found"<<endl;
	   else
	   cout<<endl;
	}
	return 0;
}
