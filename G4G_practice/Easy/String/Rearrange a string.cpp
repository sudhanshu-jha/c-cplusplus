/*
Given a string containing uppercase alphabets and integer digits (from 0 to 9), the task is to print the alphabets in the order followed by the sum of digits.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains a string with uppercase alphabets and integer digits.

Output:
Print alphabets in the order followed by the sum of digits.

Constraints:
1<=T<=10^5
1<=length of string<=10^5

Example:
Input:
2
AC2BEW3
ACCBA10D2EW30

Output:
ABCEW5
AABCCDEW6

*/

#include<iostream>  
#include<algorithm> //for STL Sort();  
using namespace std;

int main()
 {
	int t,sum,d;
	string s;
	cin>>t;
	while(t--)
	{
	    sum=d=0;
	    cin>>s;
	    int n=s.length();
	    sort(s.begin(),s.end());
	    for(int i=0;i<n;i++)
	    if(s[i]>=48 and s[i]<=57)
	    {
	        sum=sum+(s[i]-'0');
	        d++;
	    }
	    for(int i=d;i<n;i++)
	    cout<<s[i];
	    cout<<sum;
	    cout<<endl;
	}
	return 0;
}
