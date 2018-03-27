/*
Given a list of names, display the longest name.

Input: First line of input contains an integer T, the number of test cases. T test cases follows. First line of each test case contains an integer N, i.e total number of names. Next N lines contains names of different length.


Output: Longest name in the list of names.


Constraints:

1<=T<=10
1<=N<=10


Example:

Input:
1
5
Geek
Geeks
Geeksfor
GeeksforGeek
GeeksforGeeks

Output:
GeeksforGeeks

*/

#include<iostream>
using namespace std;

int main()
 {
	//code
	int t,n,i;
	
	cin>>t;
	while(t--)
	{
	    string max;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        string s;
	        cin>>s;
	        if(s.length()>max.length())
	        max=s;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
