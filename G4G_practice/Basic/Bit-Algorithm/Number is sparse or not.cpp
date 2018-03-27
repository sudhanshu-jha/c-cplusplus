/*
Given a number, check whether it is sparse or not. A number is said to be a sparse number if in binary representation of the number no two or more consecutive bits are set.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is number 'N'.

Output:
Print '1' if the number is sparse and '0' if the number is not sparse.

Constraints:
1 <=T<= 100
1 <=n<= 100

Example:
Input:
4
72
12
2
3

Output:
1
0
1
0

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    bool flag=true;
	    cin>>n;
	    int b[8];
	    for(i=7;i>=0;i--)
	    b[i]=n>>i&1;
	    for(i=7;i>=0;i--)
	    if(b[i]==1 && b[i+1]==1)
	    flag=false;
	    if(flag)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
