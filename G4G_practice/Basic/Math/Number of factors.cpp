/*
Find number of factors for a given integer N.

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N.
 

Output:
In each seperate line print the number of factors (including 1 and the number itself).


Constraints:
1<= T <=30
1<= N <=100


Example:
Input:
1
5

Output:
2

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n;
	    for(i=1;i<=n;i++)
	    if(n%i==0)
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
