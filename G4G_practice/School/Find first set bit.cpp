/*
Given an integer an N, write a program to print the position of first set bit found from right side in the binary representation of the number.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. The only line of the each test case contains an integer N.

Output:
For each test case print in a single line an integer denoting the position of the first set bit found form right side of the binary representation of the number.

Constraints:
1<=T<=100
0<=N<=106

Example:
Input:
2
18
12

Output:
2
3

Explanation:
Test case 1:
Binary representation of the 18 is 010010, the first set bit from the right side is at position 2.

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==0)
	    cout<<"0"<<endl;
	    else
	    {
	    for(i=0;i<=20;i++)
	    {
	        if(n&(1<<i))
	        {
	            cout<<i+1;
	            break;
	        }
	    }
	    cout<<endl;
	    }
	 }
	return 0;
}
