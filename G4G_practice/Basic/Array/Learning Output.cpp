/*
Being a Programmer you have to learn how to make your output looks better. According to the company, its company programmers have to present its output in a different manner as : If your output is 10.000000 you can save the decimal places and thus your output becomes 10. Now u have the learn the way to output. You are given elements of an array A[N] and you have to divide N by total no. of +ve integers, N by total no. of -ve integers and N by total no. of zero value integers.

Input : 
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. 
Second line contains N - array size. Third line contains the elements of array.

Output : 
For each test case in a new line print the division value of
N by Total no. of +ve integers
N by Total no. of -ve integers
N by Total no. of zero value integers

Constraints :
1 ≤ T ≤ 50
1 ≤ N ≤ 100
1 ≤ A[i] ≤ 1000

Input : 
1
10
7 7 7 7 7 7 -9 -9 -9 0

Output : 
1.66667
3.33333
10

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n,np,nn,nz,i;
	cin>>t;
	while(t--)
	{
	    np=nn=nz=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>0)
	        np++;
	        else if(a[i]<0)
	        nn++;
	        else
	        nz++;
	    }
	    cout<<(double) n/np<<endl;
	    cout<<(double) n/nn<<endl;
	    cout<<(double) n/nz<<endl;
	}
	return 0;
}
