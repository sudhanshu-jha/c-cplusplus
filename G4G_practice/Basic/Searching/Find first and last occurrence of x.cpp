/*
Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.

Examples:

Input : A[] = {1, 3, 5, 5, 5, 5 ,67, 123, 125}    
        x = 5
Output : First Occurrence = 2
         Last Occurrence = 5

Input : A[] = {1, 3, 5, 5, 5, 5 ,7, 123 ,125 }    
        x = 7
Output : First Occurrence = 6
         Last Occurrence = 6

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array. The last line of each test case contains an integer x.

Output:
For each test case in a new line print two integers separated by space denoting the first and last occurrence of the element x. If the element is not present in the array print -1.

Constraints:
1<=T<=101
1<=N<=100
1<=A[],k<=100

Example:
Input:
2
9
1 3 5 5 5 5 67 123 125
5
9
1 3 5 5 5 5 7 123 125
7
Output:
2 5
6 6

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,x,i,min,max,flag;
	cin>>t;
	while(t--)
	{
	    flag=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    cin>>x;
	    for(i=0;i<n;i++)
	    if(a[i]==x)  
	    {
	        min=i;
	        flag=1;
	        break;
	    }
	    for(i=min;i<n;i++)
	    if(a[i]==x)
	    {
	        max=i;
	    }
	    if(flag==1)
	    cout<<min<<" "<<max<<endl;
	    else
	    cout<<"-1"<<endl;
	}
	return 0;
}
