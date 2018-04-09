/*
Check that the sum of Digits is multiple of number or not.

Input:
The first line of input contains an integer T denoting the number of test cases.Then T test cases follow .Each test case consist of an integer N.

Output: 
Print Yes if multiple else No

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 100000

Example:
Input
2
18
99270

Output
Yes
No

Explanation:

1. sum of digit is 9 which is multiple of 18

2. sum of digits is 27 which is not a multiple of 99270

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,num,sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    num=n;
	    while(n)
	    {
	        sum=sum+n%10;
	        n=n/10;
	    }
	    if(num%sum==0)
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
