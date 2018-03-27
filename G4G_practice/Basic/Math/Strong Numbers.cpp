/*Strong Numbers are the numbers whose sum of factorial of digits is equal to the original number. Given a number, the task is to check if it is a Strong Number or not.

Examples:

Input  : n = 145
Output : 1
Sum of digit factorials = 1! + 4! + 5!
                        = 1 + 24 + 120
                        = 145

Input :  n = 5314
Output : 0


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow.  Each test case contains an integer N.

Output:
For each test case in a new line print 1 if the number is a strong number, else print a 0.

Constraints:
1<=T<=200
1<=N<=10000

Example:
Input:
2
145
100
Output:
1
0

*/

#include <iostream>
using namespace std;

int fact(int n)
{
    if(n<=1)
    return 1;
    else 
    return n*fact(n-1);
}

int main() {
	//code
	int t,n,d,r,num,sum=0;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    sum=0;
	    num=n;
	    while(n>0)
	    {
	        d=n%10;
	        sum=sum+fact(d);
	        n=n/10;
	}
	if(num==sum)
	cout<<"1"<<endl;
	else
	cout<<"0"<<endl;
	}
	return 0;
}
