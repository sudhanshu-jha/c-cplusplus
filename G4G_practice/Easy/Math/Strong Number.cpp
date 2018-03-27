/*
Write a program to check whether a number is strong or not. A number is called strong number if sum of the factorial of its digit is equal to number itself. For example: 145 as 1! + 4! + 5! = 1 + 24 + 120 = 145

Input:

First line contains number of test cases T. Then following T lines contains an integer N.


Output:

Output "Strong" if given number is strong else "Not Strong" .


Constraints:

1<=T<=50
0<=N<=1000


Example:

Input:
2
145
10

Output:
Strong
Not Strong

*/

#include<iostream>
using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=2;i<=n;i++)
    f=f*i;
    return f;
}

bool isStrong(int n)
{
    int num=n,sum=0;
    while(n)
    {
        sum=sum+fact(n%10);
        n=n/10;
    }
    if(sum==num)
    return true;
    else 
    return false;
}


int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(isStrong(n))
	    cout<<"Strong"<<endl;
	    else
	    cout<<"Not Strong"<<endl;
	}
	return 0;
}
