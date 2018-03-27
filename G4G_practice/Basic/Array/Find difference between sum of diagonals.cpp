/*
Given a matrix of n X n. The task is to calculate the absolute difference between the sums of its diagonal.
 

Input : A[][] = 11 2 4
                   4 5 6
                  10 8 -12 
Output : 15
Sum of primary diagonal = 11 + 5 + (-12) = 4.
Sum of primary diagonal = 4 + 5 + 10 = 19.
Difference = |19 - 4| = 15.


Input:
The first line of input consists of T, denoting the Test Cases. Then T test cases follow. The first line of every test case consists of N, denoting the size of matrix N X N. The second line of every test case consists of N*N spaced integers Ai.

Output:
For each test case in a single line print an integer denoting the difference between the sum of its diagonals.

Constraints:
1<=T<=100
1<=N<=50
1<=Ai<=100

Example:
Input:
2
3
11 2 4 4 5 6 10 8 -12
4
1 2 3 4 5 9 7 8 6 10 11 12 13 14 15 16
Output:
15
3

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t,n,i,j,sumr,suml;
	cin>>t;
	while(t--)
	{
	    sumr=suml=0;
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
	    cout<<abs(suml-sumr)<<endl;
	}
	return 0;
}
