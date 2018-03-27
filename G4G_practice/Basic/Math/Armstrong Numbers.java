/*
For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371

Input:
First line contains an integer, the number of test cases 'T' Each test case should contain a positive integer N.


Output:
Print "Yes" if it is a armstrong number else print "No".


Constraints:
1<=T<=31
100<= N <1000


Example:
Input:
1
371

Output:
Yes

*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		int t,n,d,sum,num;
		t=sc.nextInt();
		while(t-->0)
		{
		    sum=0;
		    n=sc.nextInt();
		    num=n;
		    while(n>0)
		    {
		        d=n%10;
		        sum=sum+d*d*d;
		        n=n/10;
		    }
		    if(sum==num)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		}
	}
}
