/*
Given a number N, print all the composite numbers less than or equal to N. The number should be printed in ascending order.

Input:
The first line contain an Integer T denoting the number of  test cases . Then T test cases follow. Each test case consist of an single integer N.

Output:
Print all the composite Number form 0 to N.

Constraints:

1 ≤ T ≤ 50
4 ≤ N ≤ 10000

Example:
Input:
2
10
6
Output:
4 6 8 9 10
4 6

*/

#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n)
{
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
    {
        flag=false;
        break;
    }
    return flag;
}

int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(i=3;i<=n;i++)
	    if(isprime(i)==false)
	    cout<<i<<" ";
	    cout<<endl;
	}
	return 0;
}
