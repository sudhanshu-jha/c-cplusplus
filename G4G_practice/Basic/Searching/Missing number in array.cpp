/*
Given an array of size n-1 and given that there are numbers from 1 to n with one missing, the missing number is to be found.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,size of array.
The second line of each test case contains N-1 input C[i],numbers in array.

Output:

Print the missing number in array.

Constraints:

1 ≤ T ≤ 100
1 ≤ N ≤ 1000
1 ≤ C[i] ≤ 1000

Example:

Input
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output
4
9

*/

#include <iostream>
using namespace std;

int bin_search(int a[],int l,int r,int k)               //Since the inputs are sorted
    {
        if(l<=r)
        {
            int m=l+(r-l)/2;
            if(a[m]==k)
            return m;
            if(a[m]<k)
            return bin_search(a,m+1,r,k);
            else 
            return bin_search(a,l,m-1,k);
        }
        return -1;
    }

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n-1];
        for(int i=0;i<n-1;i++)
        cin>>a[i];
        for(int i=1;i<=n;i++)
        if(bin_search(a,0,n-2,i)==-1)
        cout<<i<<endl;
    }
	//code
	return 0;
}
