/*
Given a square matrix of size M×M . Your task is to calculate the sum of its diagonals.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. First line of each test case contains a single integer M denoting the size of the square matrix. The next  line contains M*M space separated values of the matrix A.

Output:
For each test case in a new line print the sum of diagonals of the matrix.

Constraints:
1 ≤ T ≤ 20
2 ≤ N ≤ 10
1 ≤ A[i] ≤ 20

Example:

Input:

1
3
1 1 1 1 1 1 1 1 1

Output:
6

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,n,sum,i,j,suml,sumr;
	cin>>t;
	while(t--)
	{
	    suml=0,sumr=0;
	    cin>>n;
	    int a[n][n];
	    for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    cin>>a[i][j];
	    for(i=0;i<n;i++)
	    {
	        suml=suml+a[i][i];
	        sumr=sumr+a[n-i-1][i];
	    }
	    sum=suml+sumr;
	    cout<<sum<<endl;
	}
	return 0;
}
