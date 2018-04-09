/*
Given a string of a constant length, print a triangle out of it. The triangle should start with the first character of the string and keeps growing downwards by adding one character from the string.
The spaces on the left side of the triangle should be replaced with dot character. 

Input:
First line of the input contains an integer T denoting the number of test cases. Then T test cases follow.  Each test case consists of a single line contaning a string of length N.

Output: Corresponding to each test case, a pattern of triangle is printed in N lines.

Constraints:
1 <=T<= 30
N= 5

Example:
Input:
2
geeks
thisi

Output:
....g
...ge
..gee
.geek
geeks
....t
...th
..thi
.this
thisi

*/

#include<iostream>
using namespace std;

void printd(int n)
{
    for(int i=0;i<n;i++)
    cout<<".";
}
int main()
 {
	//code
	int t,i,j;
	char s[5];
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    for(i=4;i>=0;i--)
	    {
	        printd(i);
	    for(j=0;j<5-i;j++)
	        {
	        cout<<s[j];
	        if(j==5-i-1)
	        cout<<endl;
	    	}
        }
}
return 0;
}
