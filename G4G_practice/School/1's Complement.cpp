/*
Given an N bit binary number, find the 1's complement of the number. The ones' complement of a binary number is defined as the value obtained by inverting all the bits in the binary representation of the number (swapping 0s for 1s and vice versa).

Input:

The first line of input takes the number of test cases, T. Then T test cases follow. The first line of each test case takes the number of bits, N. The second line of each test case takes N space separated integers denoting the N bits of the binary number.

Output:

Print the 1's complement for each test case in a new line.

Constraints:

1<=T<=100

1<=N<=100

Example:

Input:

3
2
1 0
2
1 1
3
1 0 1

Output:
0 1
0 0 0 1 0

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
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	        cout<<1<<" ";
	        else
	        cout<<0<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
