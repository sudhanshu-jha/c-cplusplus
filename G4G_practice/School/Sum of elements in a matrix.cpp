/*
Given a non null integer matrix,calculate the sum of its elements.

Input: First line contains T , the number of test cases.First line of each test contains 2 integers N,M and N lines follow which contain M spaced integers.

Output:Single line for each test case containing the sum

Constraints: 1<= N,M<=10 , elements of matrix   -1000<=matrix<=1000

Example:
Input:
1
2 3 
1 0 0
8 -9 -1

Output 

-1

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,r,c,i,j,sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>r>>c;
	    int a[r][c];
	    for(i=0;i<r;i++)
	    {
	    for(j=0;j<c;j++)
	    {
	        cin>>a[i][j];
	        sum=sum+a[i][j];
	    }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
