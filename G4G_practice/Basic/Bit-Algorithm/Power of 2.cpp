/*
Given a positive integer N, check if N is a power of 2.

Input:
The first line contains 'T' denoting the number of test cases. Then follows description of test cases.
Each test case contains a single positive integer N.


Output:
Print "YES" if it is a power of 2 else "NO". (Without the double quotes)


Constraints:
1<=T<=100
0<=N<=10^18

Example:
Input :
2
1
98

Output :
YES
NO

Explanation:  (2^0 == 1)

*/

#include<iostream>
using namespace std;
int main()
 {
	int t;
	long long int n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n && (!(n&(n-1))))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
