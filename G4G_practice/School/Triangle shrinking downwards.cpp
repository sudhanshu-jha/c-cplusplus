/*
Given a string of a constant length, print a triangle out of it. The triangle should start with the given string and keeps shrinking downwards by removing one character from the begining of the string.
The spaces on the left side of the triangle should be replaced with dot character.

Input: First line of the input contains an integer T denoting the number of test cases. Then T test cases follow.  Each test case consists of a single line contaning a string of length N.

Output: Corresponding to each test case, a pattern of triangle is printed in N lines.

Constraints:
1 <=T<= 30
N= 5
Example:
Input:
2
Geeks
@io30

Output:
Geeks
.eeks
..eks
...ks
....s
@io30
.io30
..o30
...30
....0

*/

#include<iostream>
using namespace std;

void printd(int n){
    for(int i=0;i<n;i++)
    cout<<".";
}
void printp(int n,char s[]){
    for(int i=n;i<5;i++)
    cout<<s[i];
}
int main()
 {
	int t,n,i;
	char s[5];
	cin>>t;
	while(t--)
	{
	    for(i=0;i<5;i++)
	    cin>>s[i];
	    for(i=0;i<5;i++)
	    {
	        printd(i);
	        printp(i,s);
	        cout<<endl;
	    }
	}
	return 0;
}
