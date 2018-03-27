/*
Given a string, print the number of alphabets present in the string.

Input:

The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows.Each test case contains a single string. 


Output:

Print the number of alphabets present in the string.

Constraints:

1<=T<=30

1<=size of string <=100


Example:

Input:

2
adjfjh23
njnfn_+-jf

Output:

6
7

*/

#include<iostream>
#include<cctype>
using namespace std;

int main()
 {
	int t,n,i,count;
	string s;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>s;
	    n=s.length();
	    for(i=0;i<n;i++)
	    if(isalpha(s[i]))
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
