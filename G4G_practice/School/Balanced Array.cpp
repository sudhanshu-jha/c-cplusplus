/*
Given an array of even size, task is to find minimum value that can be added to an element so that array become balanced. An array is balanced if the sum of the left half of the array elements is equal to the sum of right half.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains the number of elements in the array a[] as n and next line contains space separated n elements in the array a[].

Output:
Print an integer which is the required answer.

Constraints:
1<=T<=10
2<=n<=10000
1<=a[i]<=100000

Example:
Input:
2
6
1 2 1 2 1 3
2
20 10

Output:
2
10

Explanation:
Suppose, we have an array 1 2 1 2 1 3. The Sum of first three elements is 1 + 2 + 1 = 4 and sum of last three elements is 2 + 1 + 3 = 6
So this is unbalanced, to make it balanced the minimum number we can add is 2 to any element in first half.

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t,n,i,suml,sumr;
	cin>>t;
	while(t--)
	{
	    suml=sumr=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(i<n/2)
	        suml=suml+a[i];
	        else
	        sumr=sumr+a[i];
	    }
	    cout<<abs(suml-sumr)<<endl;
	}
	return 0;
}
