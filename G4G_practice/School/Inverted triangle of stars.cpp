/*
Given an integer N, print an inverted isosceles triangle of stars such that the height of the triangle is N.

Input:
The first line of the input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing an integer N denoting the height of the inverted isosceles triangle.

Output:

Corresponding to each test case, print the inverted triangle of height N in a single line such that all the lines/rows of the triangle are placed side by side taking into consideration the spaces.


Constraints:
1 <= T <= 100
1 <= N <= 100

Example:
Input:
2
4
3
Output:
******* *****   ***     *   
***** ***   *  
Explanation:
For the 1st test case where N = 4

*******
 *****
  ***  
   *   
The above is the proper inverted isosceles traingle for the test case, but when printed in a single line it becomes as shown in the output. Please mind there are 3 spaces after the single * in the last row which has to be printed in single line also.

*/

#include<iostream>
using namespace std;

void prints(int n)
{
    for(int i=0;i<n;i++)
    cout<<"*";
    }
void printsp(int n)
{
    for(int i=0;i<n;i++)
    cout<<" ";
}

int main()
 {
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(i=0;i<n;i++)
	        {
	            printsp(i);
	            prints(2*n-1-2*i);
	            printsp(i);
	            	        }
	            	        cout<<endl;
	}
	return 0;
}
