/*
Given a number, the task is to check if it is tidy or not. A tidy number is a number whose digits are in non-decreasing order.

Examples:

Input : 1234
Output : Yes

Input : 1243
Output : No
Digits "4" and "3" violate the property.


Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N.

Output:
For each test case in a new line print 1 if the no is a tidy number else print 0.

Constraints:
1<=T<=100
1<=N<=10^9+7

Example:
Input:
2
1234
1243
Output:
1
0

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,i,n,a[11],len,c;
	cin>>t;
	while(t--)
	{
	    i=c=0;
	    bool flag=true;
	    cin>>n;
	    while(n)
	    {
	        a[i]=n%10;
	        n=n/10;
	        i++;
	        c++;
	        }
	        for(i=0;i<c;i++)
	        {
	            if(a[i]<a[i+1])
	            flag=false;
	        }
	        if(flag)
	        cout<<"1"<<endl;
	        else
	        cout<<"0"<<endl;
	
}
return 0;
}
