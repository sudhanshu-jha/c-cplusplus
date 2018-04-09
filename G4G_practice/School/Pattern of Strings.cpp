/* 
Given a string of length N, print a pattern of strings with first line being the given string of length n and keep priting in new line the strings in decreasing order of length till you print the single first character of the given string. 

Input: First line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consist of only one line which contains a string of length N.

Output:  Corresponding to each test case, pattern is printed in a new line.

Constraints:
1 <=T<= 30
N= 5

Example:

Input:
2
Geeks
th%ik

Output:
Geeks
Geek
Gee
Ge
G
th%ik
th%i
th%
th
t

*/

#include<iostream>
#include<cstring>

using namespace std;
int main()
 {
	//code
	int t,n,i;
	char s[6];
	cin>>t;
	while(t--)
	{
	    cin>>s;
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            cout<<s[j];
            cout<<endl;
        }
        	}
	return 0;
}
