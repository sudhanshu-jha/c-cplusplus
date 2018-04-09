/*
Given a number n, the task is to check if a number is divisible by 4 or not. The input number may be large and it may not be possible to store even if we use long long int.

Examples:

Input : n = 1124
Output : 1

Input  : n = 1234567589333862
Output : 0

Input:
The first line of input contains an  integer T denoting the no of test cases. Then T test cases follow. Each test case contains an number n.

Output:
For each test case in a new line print 1 if n is divisible by 4 else print 0.

Constraints:
1<=T<=100
1<=n<=10^100+5

Example:
Input:
2
1124
1234567589333862
Output:
1
0

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,dten,done,d;
	string s,s2;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    n=s.length();
	    dten=s[n-2]-'0';
	    done=s[n-1]-'0';
	    d=dten*10+done;
	    if(d%4==0)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
