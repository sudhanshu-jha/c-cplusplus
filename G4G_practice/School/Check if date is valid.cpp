/*
Given a date, the task is to check if it is valid or not. It may be assumed that the given date is in range from 01/01/1800 to 31/12/9999 and any date not within this range will also be considered invalid.

Examples :

Input : d = 10, m = 12, y = 2000
Output : 1
The given date 10/12/2000 is valid

Input  : d = 30, m = 2, y = 2000
Output : 0
The given date 30/2/2000 is invalid. The
February month cannot have 30 as day.


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains 3 space separated integers d, m, y denoting the day, month and the year respectively.

Output:
For each test case in a new line print 1 if the date is a valid date else print 0.

Constraints:
1<=T<=100
1<=d, m, y<=10000

Example:
Input:
2
10 12 2000
30 2 2000
Output:
1
0

*/

#include<iostream>
using namespace std;

bool isleap(int n)
{
    bool flag=false;
    if(n%4==0 && n%100!=0 || n%400==0)
    {
        flag=true;
    }
    else
    {
        flag=false;
    }
    return flag;
}
int main()
 {
	int t,d,m,y;
	cin>>t;
	while(t--)
	{
	    cin>>d>>m>>y;
	    if(1<=d && d<=31 && 1<=m && m<=12 && 1800<=y && y<=9999)
	    {
	        if(m==2 && d==29 && isleap(y)==true)
	        cout<<"1"<<endl;
	        else if(m==2 && d>28)
	        cout<<"0"<<endl;
	        else
	        cout<<"1"<<endl;
	    }
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
