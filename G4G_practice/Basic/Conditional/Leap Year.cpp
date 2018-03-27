/*
For an input year tell whether the year is leap or not. 

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N(Year).


Output:
Print "Yes" if it is a leap year else "No". (Without the double quotes)


Constraints:
1<=T<=31
1<=N<=9999


Example:
Input:
1
4

Output:
Yes

*/

#include<iostream>
using namespace std;

void isleap(int n)
{
    if(n%4==0)
    {
       if(n%100==0 && n%400!=0)
       cout<<"No"<<endl;
       else
       cout<<"Yes"<<endl;
    }
    else
    cout<<"No"<<endl;
}

int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    isleap(n);
	}
	return 0;
}
