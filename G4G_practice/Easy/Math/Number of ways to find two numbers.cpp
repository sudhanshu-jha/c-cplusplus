/*
You will be given a positive integer K. Your task is to find the number of ordered pairs of positive integers (a,b) where 1 ≤ a < b < K such that a + b ≤ K.

Input: 
The first line of input contains a single integer T denoting the number of test cases.
Then T test cases follow. The first and only line of each test case consists of K.
 
Output:
Corresponding to each test case, in a new line, print the number of ordered pairs of positive integers (a,b) where 1 ≤ a < b < K such that a + b ≤ K.

Constraints:
1 ≤ T ≤ 100
1 ≤ K ≤ 1000

Example:
Input
3
2
4
5

Output
0
2
4 

Explanation: 
For K = 4, the two ordered pairs are (1,2) and (1,3). For K = 5, the four ordered pairs (1,2), (1,3), (1,4) and (2,3).

#include<iostream>
using namespace std;
int main()
 {
	int t,k,i,j,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>k;
	    for(i=1;i<k-1;i++)
	    for(j=2;j<k;j++)
	    if(i+j<=k && i<j)
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
