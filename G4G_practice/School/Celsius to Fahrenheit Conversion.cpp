/*
Given a temperature in celsius, convert and print in farenheit.
 

Note: We need to print the floor value of the result.

Input:
The first line of input contains T denoting number of testcases. Each testcase contains single integer denoting the temperature in celsius.


Output:
For each testcase, output the temperature in farenheit.

Constraints:
1<=T<=100
1<=temperature in celsius<=100

Example:

Input:
1
32

Output:
89

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	//code
	int t,c,f;
	cin>>t;
	while(t--)
	{
	    cin>>c;
	    f=floor(1.8*c+32);
	    cout<<f<<endl;
	}
	return 0;
}
