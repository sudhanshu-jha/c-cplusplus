/*
You are a traveller, lost in a jungle.But you have the Map with you.And you remember the route you travelled so you will backtrack and reach the Starting point. Your task is to print the starting point.

Input:
First line consists of T test cases. Each test cases consists of 3 lines.
First line of each test case consist of two integers X,Y denoting of Your Current location.
Second line of each test case consist of an integer N denoting of number of paths you travelled.
Third line of each test case consist of 2*N spaced integers Xi,Yj denoting the points at the paths you travelled.

Output:
Print the Starting point in respective line.

Constraints:
1<=T<=20
1<=N<=20
1<=X,Y<=10

Example:
Input:
1
1 1
2
1 0 0 1

Output:
0 0

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,x,y,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    cin>>n;
	    int a[2*n];
	    for(i=0;i<2*n;i++)
	    cin>>a[i];
	    for(i=0;i<2*n;i++)
	    if(i%2==0)
	    x=x-a[i];
	    else
	    y=y-a[i];
	    cout<<x<<" "<<y<<endl;
	    }
	return 0;
}
