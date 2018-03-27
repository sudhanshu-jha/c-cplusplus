/*
Given two binary strings that represent value of two integers, find the product of two strings. For example, if the first bit string is “1100” and second bit string is “1010”, output should be 120.

Input:
First line consists of T test cases. Only line of every test case consists of 2 binary strings.

Output:
Single line output, print the multiplied value.

Constraints:
1<=T<=100
1<=Length of string<=100

Example:
Input:
2
1100 01
01 01
Output:
12
1

*/

#include<iostream>
#include<cmath>
using namespace std;

int strtodec(string s)
{
    
    int n=s.length(),i,sum;
    sum=i=0;
    while(n--)
    {
        sum=(s[n]-'0')*pow(2,i)+sum;
        i++;
    }
    return sum;
}

int main()
 {
	int t;
	string s1,s2;
	cin>>t;
	while(t--)
	{
	    cin>>s1>>s2;
	    cout<<strtodec(s1)*strtodec(s2)<<endl;
	}
	return 0;
}
