/*
Write a program to check whether a given number is Automorphic number or not.
A number is called Automorphic number if and only if its square ends in the same digits as the number itself.

For example, 762 = 5776 which ends with 76 therefore it is a automorphic number.

Input:

The first line of the input contains T denoting the total number of testcases. Each of the next T lines contains a positive integer N denoting the value of a number.


Output:

Output "Automorphic" if given number is Automorphic else "Not Automorphic" .


Constraints:

1<=T<=100
1<=N<=1000


Example:

Input:
2
1
16

Output:
Automorphic
Not Automorphic

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t,n,dc,n2;
	cin>>t;
	while(t--)
	{
	    bool flag=true;
	    cin>>n;
	    dc=floor(log10(n))+1;
	    n2=n*n;
	    while(dc)
	    {
	        if(n%10!=n2%10)
	        flag=false;
	        n=n/10;
	        n2=n2/10;
	        dc--;
	    }
	    if(flag)
	    cout<<"Automorphic"<<endl;
	    else
	    cout<<"Not Automorphic"<<endl;
	}
	return 0;
}
