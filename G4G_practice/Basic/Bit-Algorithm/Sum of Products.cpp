/*
Given an array A[ ] of N integers, calculate the sum of "A[i] & A[j]" of all the pairs formed by the given array, where & is the bitwise AND operator.

Input
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
The first line of each test case contains a positve integer N, denoting the length of the array A[ ].
The second line of each test case contains a N space seprated positve integers, denoting the elements of the array A[ ].


Output
Print out the sum of products of all pairs formed by the array.

Constraints
1 <= T <= 100
2 <= N <=30
0 <= A[ ] <= 100

Examples 

Input
3
3
5 10 15
4
10 20 30 40
5
20 16 32 50 64

Output
15
46
80

Explanation:
For the above test case 
Required Value = (5 & 10) + (5 & 15) + (10 & 15) 
                             = 0 + 5 + 10 
                             = 15

Expected Complexity
Time: O(N)

*/

#include<iostream>
using namespace std;

int pairsum(int a[],int n)
{
    int ans=0;
    for(int i=0;i<32;i++)
    {
        int k=0;
        for(int j=0;j<n;j++)
        if(a[j]&(1<<i))
        k++;
        
        ans+=(1<<i)*(k*(k-1)/2);
    }
    return ans;
}

int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    cout<<pairsum(a,n)<<endl;
	}
	return 0;
}
