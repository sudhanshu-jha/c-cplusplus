/*
Check that the number can be divided by the sum of its digit.

Input:

The first line of input contains an integer T denoting the number of test cases.Then T test cases follow .Each test case consist of an integer N.

Output:

Print 1 if divisible else 0.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 100000

Example:

Input
2
18
19170

Output
1
1

*/

#include<iostream>
using namespace std;

int sumofdig(int n)
{
    int d,sum=0;
    while(n)
    {
        d=n%10;
        sum=sum+d;
        n=n/10;
    }
    return sum;
}
int main()
 {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%(sumofdig(n))==0)
        cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }
	return 0;
}
