/*

Given a binary array, sort it in non-decreasing order

Input: First line contains an integer denoting the test cases 'T'.  Every test case contains two lines, first line is size and second line is space separated elements of array

Output:  Space separated elements of sorted arrays.  There should be a new line between output of every test case.


Constraints:
1 <= Size of Array <= 1000
10 <= Number of test cases <= 100

Example:

Input:
2
5
1 0 1 1 0
10
1 0 1 1 1 1 1 0 0 0

Output:
0 0 1 1 1
0 0 0 0 1 1 1 1 1 1 

*/

#include<iostream>
using namespace std;
int main()
 {
	//code
	int t,a[1001],n,count;
	cin>>t;
	while(t--)
	{
	    count=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    if(a[i]==0)
	    count++;
	    for(int i=0;i<n;i++)
	    {
	        if(i<count)
	        cout<<"0 ";
	        else
	        cout<<"1 ";
	    }
	    cout<<endl;
	}
	return 0;
}
