/*
A sorted array is rotated at some unknown point, find the minimum element in it in O(logn). All the elements in the array are distinct.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains the number of elements in the array a[] as n and next line contains space separated n elements in the array a[].

Output:
Print an integer which denotes the minimum element in the array.

Constraints:
1<=T<=50
1<=n<=500
1<=a[i]<=1000

Example:
Input:
2
10
2 3 4 5 6 7 8 9 10 1
5
3 4 5 1 2 

Output:
1
1

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    {
	        if(i==0 and a[0]<a[1] and a[0]<a[n-1])
	        {
	           cout<<a[0];
	           break;
	        }
	        else if(a[i]>a[i+1])
	        {
	            cout<<a[i+1];
	            break;
	        }
	        else
	        continue;
	        }
	    cout<<endl;
	}
return 0;
}
