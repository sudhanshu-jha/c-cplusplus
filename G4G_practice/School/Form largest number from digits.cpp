/*
Given an array of digits form 0 to 9 of size n, the task is to rearrange elements of the array such that after combining all the elements of the array number formed is maximum.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains an integer n denoting the number of elements in the array. Then in the next line are n space seperated integers denoting the elements of the array.

Output:
For each test case print a single line a number denoting the largest number that can be achieved by rearranging the elements of the array.

Constraints:
1<=T<=100
1<=n<=18

Example:
Input:
2
5
9 0 1 3 0
3
1 2 3

Output:
93100
321

*/

#include<iostream>
using namespace std;

void swap (int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
}

int main()
 {
	int t,n,i;
	long int r;
	cin>>t;
	while(t--)
	{
	    r=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    bubble_sort(a,n);
	    for(i=0;i<n;i++)
	    r=r*10+a[i];
	    cout<<r<<endl;
	}
	return 0;
}
