/*
Given a number, the task is to check if number is divisible by 5. The input number may be large and it may not be possible to store even if we use long long int.

Examples:

Input  : n = 56945255
Output : Yes

Input  : n = 1234567589333150
Output : Yes

Input  : n = 3635883959606670431112222
Output : No

Input:
The first line of input contains an  integer T denoting the no of test cases. Then T test cases follow. Each test case contains an number n.

Output:
For each test case in a new line print 1 if n is divisible by 5 else print 0.

Constraints:
1<=T<=100
1<=n<=10^1000+5

Example:
Input:
2
56945255
1234567589333862
Output:
1
0

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    n=s.length();
	    if(s[n-1]=='0' || s[n-1]=='5')
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
