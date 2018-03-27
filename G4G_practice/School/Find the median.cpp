/*
Given the marks of all students, calculate the median.

Input:
The first line of input takes the number of test cases, T. Then T test cases follow. Each of the T test cases takes 2 input lines.The first line of each test case takes the number of students, N.The second line of each test case takes N space separated integers denoting the marks of all the students.

Output:

Print the floor value of the median for each test case on a new line.

Constraints:

1<=T<=100

1<=N<=100

1<=Marks<=100

Example:

Input:
3
4
56 67 30 79
4
78 89 67 76
5
90 100 78 89 67

Output:
61
77
89

*/

#include<iostream>
#include<cmath>
using namespace std;

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubble_sort(int a[], int n)
{
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
    if(a[j]>a[j+1])
    swap(&a[j],&a[j+1]);
}

int main()
 {
	int t,n,i;
	double median;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    bubble_sort(a,n);
	    if(n%2==0)
	    median=floor((a[n/2]+a[n/2-1])/2);
	    else
	    median=a[n/2];
	    cout<<median<<endl;
	    }
	return 0;
}
