/*
Starting from one print a series of asterisk(*) till N terms with increasing order and difference being 1.

Input:
First line of the input is the number of test cases T. And first line of test case contain the value of 'N'.

Output:
Series of asterisk's is printed in a single line with one space between each iteration.

Constraints:
1 <=T<= 30
1 <=N<= 100

Example:

Input:


5
1
10
5
6
2

*/

import java.util.*;
import java.lang.*;
import java.io.*;



class GFG {
    static void prints(int n)
            {
            for(int i=0;i<n;i++)
            System.out.printf("*");
        }
	public static void main (String[] args) {
	    
		//code
		int t,n,i;
		Scanner sc=new Scanner(System.in);
		t=sc.nextInt();
		while(t>0)
		{
		    n=sc.nextInt();
		    for(i=1;i<=n;i++)
		    {
		        prints(i);
		        System.out.printf(" ");
		    }
		    System.out.println();
		    t--;
		}
	}
}
