/*
Given two arrays, A and B, of equal size n, the task is to find the minimum value  of A[0] * B[0] + A[1] * B[1] +…+ A[n-1] * B[n-1], where shuffling of elements of arrays A and B is allowed.


Examples:

Input : A[] = {3, 1, 1} and B[] = {6, 5, 4}.
Output : 23 Minimum value of S = 1*6 + 1*5 + 3*4 = 23.

Input : A[] = { 6, 1, 9, 5, 4 } and B[] = { 3, 4, 8, 2, 4 }
Output : 80. Minimum value of S = 1*8 + 4*4 + 5*4 + 6*3 + 9*2 = 80.


Input:
The first line of input contains an integer denoting the no of test cases. Then T test cases follow. Each test case contains three lines. The first line of input contains an integer N denoting the size of the arrays. In the second line are N space separated values of the array A[], and in the last line are N space separated values of the array B[].

Output:
For each test case in a new line print the required result.

Constraints:
1<=T<=100
1<=N<=50
1<=A[]<=20

Example:
Input:
2
3 
3 1 1
6 5 4
5
6 1 9 5 4
3 4 8 2 4
Output:
23 
80

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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        sort(a,a+n);
        sort(b,b+n,greater<int>());
        for(int i=0;i<n;i++)
        sum=sum+a[i]*b[i];
        cout<<sum<<endl;
    }
	return 0;
}
