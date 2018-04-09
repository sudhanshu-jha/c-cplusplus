/*
Given two numbers a and b, find kth digit from right of a^b.

Input:

The first line of the input contains T denoting the number of testcases.Each of the next T lines contains three space separated positive integers denoting the value of a , b and k respectively.


Output:

For each testcase, output the kth digit from right of a^b in new line.


Constraints:

1<=T<=100
1<=a , b <=15
1<=k<=|totaldigits in a^b|


Example:

Input:
2
3 3 1
5 2 2

Output:
7
2

*/

#include<iostream>
#include<cmath>
using namespace std;

int kdig(long long int r,int k)
{
    int d;
    while(k--)
    {
        d=r%10;
        r=r/10;
    }
    return d;
}
int main()
 {
	int t,k,a,b;
	long long int r;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>k;
	    r=pow(a,b);
	    cout<<kdig(r,k)<<endl;
	}
	return 0;
}
