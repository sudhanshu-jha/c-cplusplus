/*
Given an array of n distinct elements, the task is to find all elements in array which have at-least two greater elements than themselves.

Examples:

Input : A[] = {2, 8, 7, 1, 5};
Output : 1  2  5  
The output three elements have two or
more greater elements
      
Input  : A[] = {7, -2, 3, 4, 9, -1};
Output : -2  -1  3  4  

Input:
The first line of input contains an integer T denoting the no of test cases. Each test case contains two lines . The first line of input contains an integer n denoting the size of the array. Then in the next are n space separated values of the array.

Output:
For each test case in a new line print the space separated sorted values denoting the elements in array which have at-least two greater elements than themselves.

Constraints:
1<=T<=100
1<=N<=100
1<=A[]<=100

Example:
Input:
2
5
2 8 7 1 5
6
7 -2 3 4 9 -1

Output:
1 2 5
-2 -1 3 4 

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
	    for(i=0;i<n-2;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
