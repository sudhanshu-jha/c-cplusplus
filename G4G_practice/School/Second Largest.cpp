/*
Given an array, return second  largest element from an array.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the size of array.
The second line of each test case contains N input C[i].

Output:

Print the second largest element.

Constraints:

1 ≤ T ≤ 50
1 ≤ N ≤ 500
1 ≤ C[i] ≤ 1200

Example:

Input
2
5
89 24 75 11 23
6
56 42 21 23 65 20

Output
75
56

*/

#include<iostream>
#include<algorithm>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
 
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
int main()
 {
	//code
	int t,n,i;
	int a[1201];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    bubbleSort(a,n);
	    printf("%d\n",a[n-2]);
	 }
	return 0;
}
