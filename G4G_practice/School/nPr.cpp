/*
Write a program to calculate nPr. nPr represents n permutation r and value of nPr is (n!) / (n-r)!.

Input: The first line of the input contains T denoting the number of testcases. First line of the test case will be the value of n and r respectively.
Output: For each test case output will be the value of nPr.
Constraints:

1 <=n,r<= 20

n>=r


Example:

Input:

2
2 1
10 4

Output:

2
5040

*/

#include<iostream>
using namespace std;
long long int fact(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}

int main()
 {
	int t,n,r;
	long long int npr;
	cin>>t;
	while(t--)
	{
	    cin>>n>>r;
	    npr=fact(n)/fact(n-r);
	    cout<<npr<<endl;
	}
	return 0;
}
