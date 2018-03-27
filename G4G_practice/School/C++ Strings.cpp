/*
Given two strings as input. Your task is to find the longer string of the two strings, display the length of the longer string and concatenate the two strings and display the concatenated string.

Input: 
First line of the input file contains an integer T which denotes the number of test cases. Then T test cases follow. First line of each test case contains a string A and second line contains another string B.
 

Output:
Corresponding to each test case, In the first line print the length of the longer string and In the second line print the string obtained by concatenating the two strings.

.
Constraints:
1<=T<=10
1<=length(A)<=100
1<=length(B)<=100

Example:
Input:
1
Geeks
forGeeks

Output:
8
GeeksforGeeks

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,max;
	string a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    if(a.length()>b.length())
	    cout<<a.length()<<endl;
	    else
	    cout<<b.length()<<endl;
	    cout<<a+b<<endl;
	}
	return 0;
}
