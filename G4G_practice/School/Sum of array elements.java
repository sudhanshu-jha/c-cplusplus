/*
Given an integer array, find sum of elements in it.

Input:

First line contains an integer denoting the test cases 'T'. Every test case contains an integer value depicting size of array 'N' and N integer elements are to be inserted in the next line with spaces between them.

Output:

Print the sum of all elements of the array in separate line.

Constraints:

1 <= T <= 100

1 <= N<= 100

1 <= Arr[i] <= 100

Example:

Input:
2
3
3 2 1
4
1 2 3 4

Output:
6
10

*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		int t,n,i,sum;
		int[] a=new int[101];
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		while(t>0)
		{
		    sum=0;
		    n=sc.nextInt();
		    for(i=0;i<n;i++)
		    {
		        a[i]=sc.nextInt();
		        sum=sum+a[i];
		    }
		    System.out.println(sum);
		    t--;
		}
	}
}
