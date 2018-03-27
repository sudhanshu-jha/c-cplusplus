/*
Calculate the factorial for a given number.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, it contains an integer 'N'.


Output:
In each seperate line output the answer to the problem.
 

Constraints:
1<=T<=19
0<=N<=18


Example:
Input:
1
1

Output:
1

*/

#include<iostream>
using namespace std;

long long int fact(int n)
{
    if(n<=1)
    return 1;
    else
    return n*fact(n-1);
}

int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<fact(n)<<endl;
	}
	return 0;
}
