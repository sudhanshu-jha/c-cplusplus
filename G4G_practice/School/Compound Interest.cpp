/*

Write a program to find the compund interest for given principal amount P , time T(in years), compounds N times in a year at rate R. Calculate floor of future value of given principal amount.

Input:
First line contains an integer, the number of test cases 'T'.  Each test case should contain three values P, T, N, R.

Output:
Print the future value for given principal after calculating Compund Interest.
Note: Print only floor of the future value.  For example, if future value is 134.891, then output should be 134.

Constraints:
1<=T<=100
1<=P<=1000
1<=T<=20
1<=N<=4
1<=R<=20


Example:
Input:
1
1000
2
2
10

Output:
1215     //instead of 1215.51

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	//code
	int c,p,t,n,r;
	double a;
	cin>>c;
	while(c--)
	{
	    cin>>p>>t>>n>>r;
	    a=(floor)(p*pow(1.00+r/(100.00*n),n*t));
	    cout<<a<<endl;
	}
	return 0;
}
