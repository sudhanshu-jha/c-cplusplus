/*
Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is r and c,r is the number of rows and c is the number of columns.
The second line of each test case contains all the elements of the matrix in a single line separated by a single space.

Output:

Print the modified array.

Constraints:

1 ≤ T ≤ 50
1 ≤ r,c ≤ 20
0 ≤ Elements of matrix ≤ 1

Example:

Input:
3
2 2
1 0 0 0
2 3
0 0 0 0 0 1
3 4
1 0 0 1 0 0 1 0 0 0 0 0

Output:
1 1 1 0
0 0 1 1 1 1
1 1 1 1 1 1 1 1 1 0 1 1

*/

#include<iostream>
using namespace std;
int main()
 {
 	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif


	int t,r,c,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>r>>c;
	    int a[r][c],b[r][c];
	    for(i=0;i<r;i++)
	        for(j=0;j<c;j++)
	       {
	        cin>>a[i][j];
	        b[i][j]=a[i][j];
	       }
	   for(int i=0;i<r;i++)
	   for(int j=0;j<c;j++)
	   if(a[i][j]==1)
	   {
	       for(int k=0;k<r;k++)
	       b[k][j]=1;
	       for(int l=0;l<c;l++)
	       b[i][l]=1;
	   }
	   for(i=0;i<r;i++)
	   for(j=0;j<c;j++)
	   cout<<b[i][j]<<" ";
	   cout<<endl;
	}
	return 0;
}
