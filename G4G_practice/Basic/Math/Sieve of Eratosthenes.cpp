/*
Given a number n, calculate the prime numbers upto n using Sieve of Eratosthenes.  

Input: The first line of the input contains T denoting the number of testcases. First line of test case is the number to which we have to compute prime numbers.
Output: All the prime numbers upto or equal to n are displayed.
Constraints:
1 <=T<= 100
1 <=N<= 10000
Example:

Input:
2
10
35

Output:
2 3 5 7
2 3 5 7 11 13 17 19 23 29 31 

*/

#include<iostream>
#include<cmath>
using namespace std;

void sieve(int n)
{
    int comp[n+1]={0};
    int prime[(int) (n/log(n))];
    comp[0]=1;
    comp[1]=1;
    for(int i=2;i<=sqrt(n);i++)
    if(comp[i]!=1)
    for(int z=i*i;z<=n;z=z+i)
    comp[z]=1;
    int p=0;
    for(int h=0;h<=n;h++)
    if(comp[h]!=1)
    {
        prime[p]=h;
        p++;
    }
    for(int i=0;i<p;i++)
    cout<<prime[i]<<" ";
    cout<<endl;
}

int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    sieve(n);
	}
	return 0;
}
