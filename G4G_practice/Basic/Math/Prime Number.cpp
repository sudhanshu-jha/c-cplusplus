/*
For a given number chack if it is prime or not. A prime number is a number which is only divisible by 1 and itself.
 

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain a positive integer N.


Output:
Print "Yes" if it is a prime number else print "No".


Constraints:
1<= T <=30
1<= N <=100


Example: 

Input:
1
5

Output:
Yes

*/

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    bool flag=true;
    for(int i=2;i<=sqrt(n);i++)
    if(n%i==0)
    flag=false;
    return flag;
}

int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(isPrime(n) && n>1)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    	}
	return 0;
}
