/*
You will be given some numbers and your task is to find the remainders when those numbers are divided by 7.

Input: 
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of a single line containing a positive integer N.

Output:
Corresponding to each test case, in a new line, print the remainder you get when you divide the number by 7.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 10105

Example:
Input
2
98
2067355
Output
0
3

*/

class GFG {
	public static void main (String[] args) 
	{
	    Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0)
	    {
		    BigInteger N,R;
		    N=sc.nextBigInteger();
		    R=N.mod(BigInteger.valueOf(7));
		    System.out.println(R);
	    }
	}
}
