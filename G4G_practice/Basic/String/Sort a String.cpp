/*
Given a string S consisting of lowercase latin letters, arrange all its letters in ascending order. 

Input:

The first line of the input contains T denoting number of testcases.Then follows description of each testcase.The first line of the testcase contains positive integer N denoting the length of string.The second line contains the string S.


Output:

For each testcase,output the sorted string.


Constraints:

1<=T<=100
1<=N<=100


Example:

Input:
1
5
edcab

Output:
abcde

*/

#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	    cout<<s<<endl;
	}
	return 0;
}
