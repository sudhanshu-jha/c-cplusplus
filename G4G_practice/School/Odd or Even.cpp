/*
Given a positive integer determine whether it is odd or even.

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N.


Output:
In each seperate line print "odd" if odd and "even" if even.(Dont print the quotes)


Constraints:
1<=T<=30
0<=N<=50


Example:
Input:
1
23

Output:
odd

*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n%2==0)
	    cout<<"even"<<endl;
	    else 
	    cout<<"odd"<<endl;
	}
	return 0;
}
