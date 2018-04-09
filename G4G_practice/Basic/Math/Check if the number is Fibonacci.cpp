/*
Check if a given number is Fibonacci number. Fibonacci number is a number which occurs in Fibonacci series.

Input:
The first line of input contains an integer T denoting the number of test cases.
Each test case contains a number.

Output:
Print "Yes" if the entered number is Fibonacci number else "No".
 
Constraints:
1<=t<=100
1<=n<=100

Example:

Input
2
34
41

Output
Yes
No

*/

#include<iostream>
using namespace std;

bool isfibo(int n)
{
    bool flag=false;
    int fib[20];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<20;i++)
    fib[i]=fib[i-1]+fib[i-2];
    for(int i=0;i<20;i++)
    {
        if(n==fib[i])
        {
            flag=true;
            break;
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
	    if(isfibo(n))
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
