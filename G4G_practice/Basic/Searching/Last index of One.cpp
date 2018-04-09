/*
Given a sorted stream of characters consisting only '0' and '1',  print the last index of the '1' present in it. Input stream may either be sorted in decreasing order or increasing order.
It is guaranteed that at least a  single '1' will be present in the array.


Input: First line of the input contains the number of test cases (T) ,T lines follow each containing a stream of characters.

 
Output: Corresponding to every test case , output the last index of 1 present.


Constraints: 
1<=T<=10 ;
1<=sizeofstream<=100
 

Example:
Input:
2
00001
1
Output:
4
0

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,i,n,s_i;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    n=s.length();
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        s_i=i;
	    }
	    cout<<s_i<<endl;
	}
	return 0;
}
