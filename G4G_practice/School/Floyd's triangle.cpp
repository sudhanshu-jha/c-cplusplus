/*
Given an input n, print Floyd's triangle with n lines.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer n.

Output:
Print the Floyd's triangle with n lines.

Constraints:
1<=T<=10
1<=N<=20

Example:

Input:
2
4
5

Output:
1
2 3
4 5 6
7 8 9 10
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,j,p,c;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a;
	    c=1;
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<i+1;j++)
	           {
	               cout<<c<<" ";
	               c++;
	           } 
	        cout<<endl;
	    }
	   	}
	return 0;
}
