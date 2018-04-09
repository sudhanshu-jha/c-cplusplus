/*
You are given N strings of alphabet characters and the task is to find their matching decimal representation as on the shown keypad. Output the decimal representation corresponding to the string. For ex: if you are given “amazon” then its corresponding decimal representation will be 262966.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing a string.

Output:

For each test case, print in a new line, the corresponding decimal representation of the given string.

Constraints:

1 ≤ T ≤ 100
1 ≤ length of String ≤ 100

Example:

Input
2
geeksforgeeks
geeksquiz

Output
4335736743357
433577849

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,i,n;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    n=s.length();
	    for(i=0;i<n;i++)
	    if(s[i]=='a'||s[i]=='b'||s[i]=='c')
	    cout<<"2";
	    else if(s[i]=='d'||s[i]=='e'||s[i]=='f')
	    cout<<"3";
	    else if(s[i]=='g'||s[i]=='h'||s[i]=='i')
	    cout<<"4";
	    else if(s[i]=='j'||s[i]=='k'||s[i]=='l')
	    cout<<"5";
	    else if(s[i]=='m'||s[i]=='n'||s[i]=='o')
	    cout<<"6";
	    else if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s')
	    cout<<"7";
	    else if(s[i]=='t'||s[i]=='u'||s[i]=='v')
	    cout<<"8";
	    else
	    cout<<"9";
	    cout<<endl;
	    }
	    return 0;
      }
