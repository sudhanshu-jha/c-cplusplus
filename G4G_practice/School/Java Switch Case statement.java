/*
Today your task is simple. You have to calculate area of circle and rectangle depending upon user's choice.

Input:
First line of the input contains an integer T which denotes the number of test cases. Then T test cases follow.  Each test case contains two lines. First line contain 1 for circle or  2 for rectangle.Second line contains integers R(radius) or L(length) and B(Breadth)(space separated).

Output: 
For each test case, print area of circle or rectangle.

Constraints:
1 <= T< = 10
1<=R<=10
1<=L<= 10
1<=B<= 10

Note: Use Math.PI for pi value.
Example:
Input:
2
1
5
2
5 10    
Output:
78.53981633974483
50

*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
		short t,r,l,b,c;
		t=sc.nextShort();
		while(t-->0)
		{
		    c=sc.nextShort();
		    switch (c)
		    {
		    case 1:
		        r=sc.nextShort();
		        System.out.println(Math.PI*r*r);
		        break;
		    case 2:
		        l=sc.nextShort();
		        b=sc.nextShort();
		        System.out.println(l*b);
		        break;
		    }
		}
	}
}
