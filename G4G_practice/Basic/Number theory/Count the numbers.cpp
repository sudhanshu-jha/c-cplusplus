/*
Given a number N, count the numbers from 1 to N which comprise of digits, only in set 1, 2, 3, 4 and 5. 

Input:

The first line of input contains an integer T denoting the number of test cases.Then T test cases follow. Each test case consist of one line. Each line of each test case is N, where N is the range from 1 to N.

Output:

Print the count of numbers in the given range from 1 to N.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 1000

Example:

Input:
2
100
10
Output:
30
5

*/

#include<iostream>
using namespace std;

bool gooddig(int n)
{
    int d;
    bool flag=true;
    while(n)
    {
        d=n%10;
        if(d==6 || d==7 || d==8 || d==9 || d==0)
        flag=false;
        n=n/10;
    }
    return flag;
}
int main()
 {
	short t,n,count;
	cin>>t;
	while(t--)
	{
	   count=0;
	   cin>>n;
	   for(short i=1;i<=n;i++)
	   if(gooddig(i))
	   count++;
	   cout<<count<<endl;
	}
	return 0;
}
