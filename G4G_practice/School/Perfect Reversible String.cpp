/*
You are given a string ‘str’, the task is to check that reverses of all possible substrings of ‘str’ are present in ‘str’?

Input : str = "ab"
Output: 0
// all substrings are "a","b","ab" but reverse
// of "ab" is not present in str

Input : str = "aba"
Output: 1

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a single integer N denoting the length of string. The next line contains the string s.


Output:
Print "1" if it is a palindrome else "1". (Without the double quotes)


Constraints:
1<=T<=30
1<=N<=100


Example:
Input:
2
3
aba
5
abcde

Output:
1
0

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    bool flag=true;
	    cin>>n;
	    char s[n];
	    for(i=0;i<n;i++)
	    cin>>s[i];
	    for(i=0;i<n/2;i++)
	    if(s[i]!=s[n-i-1])
	    flag=false;
	    if(flag)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
