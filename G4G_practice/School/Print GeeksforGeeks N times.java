/*
Given an integer N. The task is to print "GeeksforGeeks" N times (without quotes). Every time "GeeksforGeeks" will be printed on a new line.

Input:

The first line contains a single integer T i.e. the number of test cases. Each test case contains a single integer N representing number of times the string "GeeksforGeeks" will be printed.
 

Output:

Corresponding to each test case, print "GeeksforGeeks" N times (without quotes), every time on a new line.

Constraints:
1<=T<=20
1<=N<=100

Example:

Input:
2
3
2

Output:
GeeksforGeeks
GeeksforGeeks
GeeksforGeeks
GeeksforGeeks
GeeksforGeeks

*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		int t,n,i;
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		while(t-->0)
		{
		    n=sc.nextInt();
		    for(i=0;i<n;i++)
		    System.out.println("GeeksforGeeks");
		}
	}
}
