/*
Swap given two numbers and print them. (Try to do it without a temporary variable.)

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain two positive numbers a and b.


Output:
Print the 2 numbers after swapping.


Constraints: 
1<=T<=30
1<=a<=1000
1<=b<=1000


Example:
Input:
2
20 30
12 32

Output:
30 20
32 12

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    a=a+b;
	    b=a-b;
	    a=a-b;
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
