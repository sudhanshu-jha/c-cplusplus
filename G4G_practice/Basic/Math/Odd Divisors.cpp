/*
Given a natural number n, print count of numbers from 1 to n that have odd number of divisors.  For example,  4 has odd number of divisors (1, 2, 4), but 8 doesn't (1, 2, 4, 8)

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is n.

Output:
Count of numbers from 1 to n with odd divisors.

Constraints:
1 <= T <= 30
1 <= N <= 100000

Example:
Input:
3
1
4
5

Output:
1
2
2

*/

#include<iostream>
using namespace std;

bool odddivcount(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count%2!=0)
    return true;
    else
    return false;
}

int main()
 {
	int t,n,codd;
	cin>>t;
	while(t--)
	{
	    codd=0;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    if(odddivcount(i))
	    codd++;
	    cout<<codd<<endl;
	}
	return 0;
}
