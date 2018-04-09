/*Write a program to add two matrices.

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test contains an integer N denoting the size of the square matrix. Then the two square matrix of size N*N is taken as input in next two lines.

Output:
For each test case in a new line print separated values of the matrix denoting addition of the two matrices.
 

Constraints:
1<=T<=100
1<=N<=20
1<=a[i][j]<=1000

Example:
Input:
2
4
1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4
1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4
2
1 2 3 4
3 4 2 1

Output:
2 2 2 2 4 4 4 4 6 6 6 6 8 8 8 8 
4 6 5 5*/



#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n][n],b[n][n],r[n][n];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	        cin>>a[i][j];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	        cin>>b[i][j];
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	        r[i][j]=a[i][j]+b[i][j];
	   for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	        cout<<r[i][j]<<" ";
	        cout<<endl;
	}
	return 0;
}
