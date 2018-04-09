/*
You are given a string S , convert it into a magical string and print the answer.
A string can be made into a magical string if the alphabets are swapped in the given manner : a->z or z->a , b->y or y->b and so on.  
 
Note: All the alphabets in the string are in lowercase.

Input:
The first line contains a integer T i.e. the number of test cases. Each test case contains a string S as a input.

Output:
In one line print the magical string of the given string.
 
Constraints:
1<=T<=100
1<=Length of String<=100

Examples:
Input:
3
varun
akshay
vijay

Output:
ezifm
zphszb
erqzb

Explanation:
Test case 1: Magical string of "varun" will be "ezifm" since v->e , a->z , r->i , u->f and n->m.
Test case 2: Magical string of "akshay" will be "zphszb" since a->z , k->p , s->h , h->s , a->z and y->b.

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,i,j,n;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    string b="abcdefghijklmnopqrstuvwxyz";
	    n=s.length();
	    for(i=0;i<n;i++)
	    for(j=0;j<26;j++)
	    {
	        if(s[i]==b[j])
	        cout<<b[25-j];
	    }
	    cout<<endl;
	    }
	    return 0;
}
