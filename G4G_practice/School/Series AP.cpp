/*
Given the first 2 terms of Arithmetic Series tell the nth term of the series. 

Input:
First line contains an integer, the number of test cases 'T'. Each test case in its first line should contain two positive integer a and b(First 2 terms of AP). In the second line of every test case it contains of an integer N.


Output:
In each seperate line print the Nth term of the Arithmetic Progression.


Constraints:
1<=T<=30
-100<=a<=100
-100<=b<=100
1 <= N <= 100


Example:
Input:
2
2 3
4
1 2
10

Output:
5
10

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,a,b,n;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>n;
	    int d=b-a;
	    cout<<a+(n-1)*d<<endl;
	}
	return 0;
}
