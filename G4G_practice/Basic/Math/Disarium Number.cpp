/*
Given a number “n”, find if it is Disarium or not. A number is called Disarium if sum of its digits powered with their respective positions is equal to the number itself.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of one line. The first line of each test case consists of an integer N.

Output:
Corresponding to each test case, in a new line, print 1 if N is Disarium , else 0.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 1000

Example:
Input:
2
89
80

Output
1
0

Explanation
1. For first test case as 8^1+9^2 = 89 thus output is 1
2. For sec test case 8^1 + 0^2 = 8 thus output is 0

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t,n,count,sum,num;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    num=n;
	    count=floor(log10(n))+1;
	    while(n)
	    {
	        sum=sum+pow(n%10,count);
	        n=n/10;
	        count--;
	    }
	    if(sum==num)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
