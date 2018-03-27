/*
India has infinitely many cities, numbered starting from 1. Some pairs of cities are connected with bidirectional railway tracks:

There are railway tracks 1-2, 3-4, 5-6, 7-8, and so on.
There are railway tracks 1-3, 3-5, 5-7, 7-9, ... (between every two consecutive odd numbers).
There are railway tracks 2-4, 4-6, 6-8, 8-10, ... (between every two consecutive even numbers).
You are given T queries. In each query, for the given pair of different cities a and b, you should check if there is a railway track between them. For each query, print "YES" or "NO" accordingly.

Input:
The first line of the input contains an integer T, denoting the number of queries.
Each of the following T lines contains two distinct integers a and b, denoting two cities in one query.

Output:
For each query, output a single line containing the answer — "YES" if there is a railway track between the given cities a and b, and "NO" otherwise (without the quotes).

Constraints:
1 <= T <= 1000
1 <= a, b <= 10^9

Example:
Input:
5
1 4
4 3
5 4
10 12
1 3
Output:
NO
YES
NO
YES
YES

*/

#include<iostream>
using namespace std;
int main()
 {
    int t,a,b,min;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        min=a<b?a:b;
        if(abs(a-b)==2)
        cout<<"YES"<<endl;
        else if(abs(a-b)==1 && min%2==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
