/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Input:
The first line contains 'T' denoting the number of testcases. Then follows description of testcases. The next T lines contains a single integer N denoting the value of N.


Output:
Output the sum of all its digit until the result has only one digit.


Constraints:
1<=T<=30
1<=n<=10^9


Example:
Input :
2
1
98


Output :
1
8

Explanation:  For example, if we conisder 98, we get 9+8  = 17 after first addition. Then we get 1+7 = 8.  We stop at this point because we are left with one digit.

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<1+(n-1)%9<<endl;
	}
	return 0;
}
