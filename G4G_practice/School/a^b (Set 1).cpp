/*
For two given positive numbers a and b. Find a^b.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, there are two numbers a and b.


Output:
Find a^b.


Constraints:
1 <= T <= 30
1 <= a <= 10
1 <= b <= 10


Example:
Input:
2
1 1
5 2

Output:
1
25

*/

#include<iostream>
using namespace std;

long int power(int a,int b)
{
    long int r=1;
    for(int i=0;i<b;i++)
    r=r*a;
    return r;
}

int main()
 {
	//code
	int t,a,b;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b;
	    cout<<power(a,b)<<endl;
	}
	return 0;
}
