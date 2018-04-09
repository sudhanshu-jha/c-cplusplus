/*
Write a program to find the greatest of the three numbers. 

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain three positive numbers a,b and c.


Output:
Print maximum of three numbers.


Constraints:
1<=T<=30
1<=a<=1000
1<=b<=1000
1<=c<=1000


Example:
Input:
1
10 3 2

Output:
10

*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	    cout<<a<<endl;
	    else if(b>a && b>c)
	    cout<<b<<endl;
	    else
	    cout<<c<<endl;
	}
	return 0;
}
