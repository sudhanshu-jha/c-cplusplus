/*
Given two given numbers a and b where 1<=a<=b, find the number of perfect squares between a and b (a and b inclusive).

Input:
First line of input contains number of test cases T. Each line of test case contain numbers 'a' and 'b' seperated by a single space.

Output:
Number of perfect squares are displayed.

Constraints:
1 <=T<= 30
1 <=a
Example:
Input:
2
9 25
1 1000

Output:
3
31

*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
 {
	int t,a,b,count,i;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    count=0;
	    for(i=a;i<=b;i++)
	    if((int)sqrt(i)*sqrt(i)==i)
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
