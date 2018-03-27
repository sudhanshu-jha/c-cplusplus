/*
We are given an array of even size, Your task is to find the minimum sum which is obtained by sorting the array in such a way that the sum of product of alternate elements is minimum.

Examples:

Input : A[] = {9, 2, 8, 4, 5, 7, 6, 0}
Output : Minimum sum of the product of 
         consecutive pair elements: 74
         Sorted arr[] for minimum sum: 
         {9, 0, 8, 2, 7, 4, 6, 5}
Explanation : We get 74 using below
calculation in rearranged array.
9*0 + 8*2 + 7*4 + 6*5 = 74


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. Then in the next line are N space separated digits of the array.

Output:
For each test case in new line print the minimum sum.

Constraints:
1<=T<=100
4<=N<=100
1<=A[]<=1000

Example:
Input:
2
8
9 2 8 4 5 7 6 0
4
1 2 3 4
Output:
74
10

*/

#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t,n,sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    for(int i=0;i<n/2;i++)
	    sum=sum+a[i]*a[n-1-i];
	    cout<<sum<<endl;
	}
	return 0;
}
