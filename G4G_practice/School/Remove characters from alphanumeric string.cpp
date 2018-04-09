/*
Remove all characters from an alphanumeric string.

Input:
The first line of the input contains T denoting the number of testcases. First line of each test case will be an alphanumeric string.

Output:
 For each test case output will be a numeric string after removing all the characters.

Constraints:
1 <= T <= 30
1 <= size of string <= 100

Example:

Input:
1
AA123BB4

Output:
1234

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
	    if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
	    continue;
	    else
	    cout<<s[i];
	    cout<<endl;
	    }
	return 0;
}
