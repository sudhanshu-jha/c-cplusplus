/*
Given two positive numbers x and y, check if y is a power of x or not.

Input:
First line contains an integer, the number of test cases 'T'. Each test case should contain two positive numbers x and y.


Output:
Print 1 if y is a power of x, else print 0.


Constraints: 
1<=T<=30
1<=x<=1000
1<=y<=100000000


Example:
Input:
2
2 8
1 3

Output:
1
0

*/

#include<iostream>
using namespace std;

bool ispower(int x,int y)
{
    if(x==1 && y==1)
    return true;
    else if(x==1 && y!=1)
    return false;
    else
    while(y!=1)
    {
        if(y%x==0)
        y=y/x;
        else
        return false;
    }
    return true;
}

int main()
 {
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(ispower(x,y))
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
