/*
Given a string containing only lowercase letters, generate a string with the same letters, but in uppercase.

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of a string.

Output:

Corresponding to each test case, in a new line, print the string in uppercase.

Constraints:

1 ≤ T ≤ 100
1 ≤ string length ≤ 50

Example:

Input
2
geeks
geeksforgeeks

Output
GEEKS

GEEKSFORGEEKS

*/

#include<iostream>
using namespace std;

int main()
 {
	int t,i;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    int n=s.length();
	    for(i=0;i<n;i++)
	    {
	        if(s[i]>=97 && s[i]<=122)
	        printf("%c",s[i]-32);
	        else
	        printf("%c",s[i]);
	    }
	    cout<<endl;
	}
	return 0;
}
