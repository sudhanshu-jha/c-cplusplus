/*
Check if  a given number is perfect or not. A number is perfect if  sum of factorial of its digit is equal to the given number. For example 145 is a Perfect Number because 1! + 4! + 5! = 145

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The next T lines will contain an integer N.

Output:
Corresponding to each test case, in a new line, print "Perfect " if it follow above condition else print "Not Perfect"  without quotes.

Constraints:

1 ≤ T ≤ 50

1 ≤ N ≤ 10000


Example:

Input:

2

23

145

Output:
Not Perfect
Perfect

*/

#include<iostream>
using namespace std;

long int fact(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}

int main()
 {
	int t,n,num,d;
	long int sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    num=n;
	    while(n)
	    {
	        d=n%10;
	        n=n/10;
	        sum=sum+fact(d);
	    }
	    if(sum==num)
	    cout<<"Perfect"<<endl;
	    else
	    cout<<"Not Perfect"<<endl;
	}
	
	return 0;
}
