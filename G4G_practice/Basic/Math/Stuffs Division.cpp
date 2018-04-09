/*
A Community decided to give some cool stuffs to N people, distributed in the form of Array A (A0, A1.... An). Sam was a Team lead and proposed an idea to distrubute the stuff, he told them to distribute in such a way that i'th member would get i stuffs. Now, sam wants to know if he was right. Your task is to help Sam.

Input:
First line denotes the number of test cases T.
The first line of each test case contains one integer N, denoting the number of people.
The second line of each test case contains N integers Ai, denoting the numbers of cool stuff in the collection of i'th member.

Output:
The first line should contain YES, if we can obtain the required division, otherwise NO.

Constraints:
1<=T<=100
1<=N<=1000
1<=Ai<=100.

Examples:
Input:
2
5
7 4 1 1 2
5
1 1 1 1 1
Output:
YES
NO

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,i,sum,sumn;
	cin>>t;
	while(t--)
	{
	    sum=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    sumn=(n+1)*n/2;
	    if(sumn==sum)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
