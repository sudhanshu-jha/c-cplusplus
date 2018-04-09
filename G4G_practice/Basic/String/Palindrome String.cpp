/*
Given a string s check if it is palindrome or not.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a single integer N denoting the length of string. The next line contains the string s.


Output:
Print "Yes" if it is a palindrome else "No". (Without the double quotes)


Constraints:
1<=T<=30
1<=N<=100


Example:
Input:
1
4
abba

Output:
Yes

*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
	int t,n,i;
	string s,s2;
	cin>>t;
	while(t--)
	{
	    s2="";
	    cin>>n>>s;
	    for(i=n-1;i>=0;i--)
	    s2=s2+s[i];
	    if(s==s2)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
