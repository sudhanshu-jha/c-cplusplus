/*
Given a 2D matrix, the task is to find maximum sum of a hour glass.

An hour glass is made of 7 cells
in following form.
    A B C
      D
    E F G
Examples:

Input : 1 1 1 0 0 
        0 1 0 0 0 
        1 1 3 0 0 
        0 0 0 2 0 
        0 0 0 0 4 
Output : 9
Below is the hour glass with
maximum sum:
3 0 0 
  2
0 0 4


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two space separated integers N and M denoting the size of the matrix. Then in the next line are N*M values of the matrix (m).

Output:
For each test case in a new line print the required output.

Constraints:
1<=T<=100
1<=N,M<=20 
1<=m[][]<1000

Example:
Input:
2
1 2
1 2 
3 3 
1 1 1 1 1 1 1 1 1 

Output:
-1
7

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,r,c,sumh,max,i,j;
	cin>>t;
	while(t--)
	{
	    max=sumh=0;
	    cin>>r>>c;
	    int a[r][c];
	    for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	    cin>>a[i][j];
	    if(r<3 || c<3)
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    else
	    {
	    for(i=0;i<r-2;i++)
	            for(j=0;j<c-2;j++)
	        {
	            sumh=a[i][j]+a[i][j+1]+a[i][j+2]
	                +a[i+1][j+1]
	            +a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
	            if(sumh>max)
                max=sumh;
	        }
	        cout<<max<<endl;
	}
	}
	return 0;
}
