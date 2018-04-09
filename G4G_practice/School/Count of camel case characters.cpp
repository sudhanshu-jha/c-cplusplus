/*
Your friend is new to Programming. He is given a task in the school to find the total number of alphabets in camel case in a string s. Help your friend in doing so.

Input : 
The first line of input contains an integer T denoting the Test cases. Then T test cases follow. Each line of the test case contains a string s.

Output : 
For each test case in a new line print the count of camel case character in the string.

Constraints:
1<=T<=100
1<=|length of string|<=100
 

Example:
Input : 
3
ckjkUUYII
HKJT
njnnk

Output : 
5
4
0

*/


#include<iostream>
#include<cstring>
using namespace std;

int main()
 {
	int t,i,count,n;
	char s[101];
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>s;
	    n=strlen(s);
	    for(i=0;i<n;i++)
	    if(s[i]>=65 && s[i]<=90)
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
