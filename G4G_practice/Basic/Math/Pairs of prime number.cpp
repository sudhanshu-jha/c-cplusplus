/*
Print all pairs(sets) of prime numbers (p,q) such that p*q <= n, where n is given number.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N.

Output:

Print the all pairs of prime numbers in increasing order and in single line.

Example:

15 :- 2 2 2 3 2 5 2 7 3 2 3 3 3 5 5 2 5 3 7 2

42 :-  2 2 2 3 2 5 2 7 2 11 2 13 2 17 2 19 3 2 3 3 3 5 3 7 3 11 3 13 5 2 5 3 5 5 5 7 7 2 7 3 7 5 11 2 11 3 13 2 13 3 17 2 19 2

Constraints:

1 ≤ T ≤ 50
4 ≤ N ≤ 400

Example:

Input
2
4
8

Output
2 2
2 2 2 3 3 2

*/

#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n)
{
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
            return flag;
        }
    }
    return flag;
}

int main()
 {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=2;i<=n/2;i++)
            for(int j=2;j<=n/2;j++)
            if(isprime(i) && isprime(j))
            {
                if(i*j<=n)
                cout<<i<<" "<<j<<" ";
            }
            cout<<endl;
    }
	return 0;
}
