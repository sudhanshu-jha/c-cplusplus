/*
Given a no N you can perform an operation in it in which you can change a digit 5 to 6 and vice versa. Now your task is to print the sum of the max no and the min no obtained by performing such operations.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test case follow . Each test case contains a number N.

Output:
For each test case in a new line print the required sum.

Constraints:
1<=T<=100
1<=N<=10000

Example:
Input:
2
35
5
Output:
71
11

Explanation:
For first test case
The max no which can be formed is 36 and the min no which can be formed is 35 itself 
sum : 36+35 = 71
For second test case
sum : 5+6 = 11
*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	//code
	int t,n,num,d,sum,i;
	cin>>t;
    while(t--)
    {
        i=sum=0;
        cin>>n;
	    num=n;
	    while(n)
	    {
	        d=n%10;
	        if(d==6)
	        d=5;
	        else if(d==5)
	        d=6;
	        else
	        d=d;
	        sum=sum+d*pow(10,i);
	        n=n/10;
	        i++;
	    }
	    cout<<sum+num<<endl;
	}
	return 0;
}
