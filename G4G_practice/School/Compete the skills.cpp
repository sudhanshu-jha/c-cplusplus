/*
A and B are good friend and programmers. They are always in a healthy competition with each other. They decide to judge the best among them by competing. They do so by comparing their three skills as per their values. Please help them doing so as they are busy.

Set for A are like [a1, a2, a3]
Set for B are like [b1, b2, b3]

Compare ith skill of A with ith skill of B
if a[i] > b[i] , A's score increases by 1
if a[i] < b[i] , B's score increases by 1


Input : 
The first line of input contains an integer T denoting the Test cases. Then T test cases folllow. The second line of each test case contains Skill values of A . The third line of each test case contains Skill values of B
 

Output : 
For each test case in a new line print the score of A and B separated by space.
 

Constraints :
1 ≤ T ≤ 50
1 ≤ a[i] ≤ 1017
1 ≤ b[i] ≤ 1017


Example:
Input : 
2
4 2 7
5 6 3
4 2 7
5 2 8

Output : 
1 2
0 2

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,i,ca,cb;
	long int a[3],b[3];
	cin>>t;
	while(t--)
	{
	   ca=cb=0;
	   for(i=0;i<3;i++)
	   cin>>a[i];
	   for(i=0;i<3;i++)
	   cin>>b[i];
	   for(i=0;i<3;i++)
	   if(a[i]>b[i])
	   ca++;
	   else if(b[i]>a[i])
	   cb++;
	   else
	   continue;
	   cout<<ca<<" "<<cb<<endl;
	}
	return 0;
}
