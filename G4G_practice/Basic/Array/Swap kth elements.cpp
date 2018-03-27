/*
Given an array, swap kth element from beginning with kth element from end.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N and k,N is the size of array and kth number.
The second line of each test case contains N input C[i].

Output:

Print the modified array.

Constraints:

1 ≤ T ≤ 100
1 ≤ K ≤ N ≤ 500
1 ≤ C[i] ≤ 1000

Example:

Input
1
8 3
1 2 3 4 5 6 7 8

Output
1 2 6 4 5 3 7 8

*/

#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
 {
     int t,n,k,i;
     cin>>t;
     while(t--)
     {
         cin>>n>>k;
         int a[n];
         for(i=0;i<n;i++)
         cin>>a[i];
         swap(&a[k-1],&a[n-k]);
         for(i=0;i<n;i++)
         cout<<a[i]<<" ";
         cout<<endl;
     }
	return 0;
}
