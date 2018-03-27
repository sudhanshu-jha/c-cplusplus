/*
Two friends are playing a game. One gives an integer N  to other and asks: What is the number of divisors of N that are divisible by 3? The task is to help the other friend in finding the number of divisors.

Input:
The first line of input contains an integer T denoting the number of test cases.Then T test cases follow .Each test case consist of an integer N.

Output:
For each test case in a new line print the  number of divisors.

Constraints:

1 ≤ T ≤ 50

1 ≤ N ≤ 100000


Example:

Input:

2
6
10

Output:

2
0

Explanation:

6 has three divisors 1, 3 and 6 out of which two are divisible by 3.
10 has four divisors 1,2,5 and 10 none of which is divisible by 3

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,n,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n;
	    for(int i=3;i<=n;i++)
	    if(n%i==0)
	    if(i%3==0)
	    count++;
	    cout<<count<<endl;
	}
	return 0;
}
