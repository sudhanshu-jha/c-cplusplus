/*
Given an array, print all its elements.

Input:

The first line of the input contains T denoting the total number of testcases. The first line of each testcase contains N denoting the size of array. The second line contains N space separated positive integers denoting the elements of array.


Output:

For each testcase, print all its element in new line.


Constraints:

1<=T<=20
1<=N<=100
1<=a[i]<=100

Example:
Input:
1
5
1 2 3 4 5

Output:
1 2 3 4 5
*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t,n,i;
		t=sc.nextInt();
		while(t-->0)
		{
		    n=sc.nextInt();
		    int[] a=new int[n];
		    for(i=0;i<n;i++)
		    a[i]=sc.nextInt();
		    for(i=0;i<n;i++)
		    System.out.printf(a[i]+" ");
		    System.out.println();
		}
	}
}
