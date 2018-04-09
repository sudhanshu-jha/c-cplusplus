/*
Write a program to check whether a character is vowel or not.

Input:

The first line of the input contains T denoting total number of testcases. Each of the testcase contains one character c.

Note : c is either lowercase or uppercase english aplhabetic character

Output:

Print "YES" if character is vowel else "NO". (without the quotes)


Constraints:

1<=T<=100


Example:

Input:
2
a
z

Output:
YES
NO

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t;
	char c;
	cin>>t;
	while(t--)
	{
	    cin>>c;
	    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' 
	    || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
