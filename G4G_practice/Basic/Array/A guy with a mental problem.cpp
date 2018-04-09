/*
A guy had to reach his home and don't want to be late. So he took train to reach home. But he had mental illness,so he always switches train at every station. For eg, if he starts with train A then at station 2 he will switch his train to train B  and so on. Else vice versa. Please help him to find the minimum total time he would take to reach his home.

Input:
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a positive integer N - the number of tasks to be completed. The second line contains N space-separated positive integers representing the time taken in seconds by train A to reach next Stations. The third line contains N space-separated positive integers representing the time taken in seconds by train B to reach next Stations.

Output:
For each testcase, print a single line containing the minimum total time in seconds to reach home.

Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Ai, Bi <= 1000

Example:
Input:
1
3
2 1 2
3 2 1
Output:
5

Explanation:
If he choose train A initially,
Then time to reach home will be : 2 + 2 + 2 = 6 
If he Choose train B initially,
Then time to reach home will be : 3 + 1 + 1 = 5

*/

#include<iostream>
using namespace std;
int main()
 {
 	int t,n,i,asum,bsum,min;
	cin>>t;
	while(t--)
	{
	    asum=bsum=0;
	    cin>>n;
	    int a[n],b[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    cin>>b[i];
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0)
	        asum=asum+a[i];
	        else
	        asum=asum+b[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0)
	        bsum=bsum+b[i];
	        else
	        bsum=bsum+a[i];
	    }
	    min=asum<bsum?asum:bsum;
	    cout<<min<<endl;
	}
	return 0;
}
