/*
Given two positive integers num1 and num2, subtract num2 from num1 on a 12 hour clock rather than a number line.

Input:
First line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing two integers separated by a space .
 

Output:
Corresponding to each test case, print the difference in a new line.


Constraints:
1<=T<=100
0<=num1<=1000
0<=num2<=1000
 
Example:

Input
2
7 5
5 7

Output
2
-2

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    cout<<(a-b)%12<<endl;
	    }
	return 0;
}



