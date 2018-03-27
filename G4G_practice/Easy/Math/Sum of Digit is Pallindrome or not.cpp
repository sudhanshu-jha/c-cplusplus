/*
Write a program to check if the sum of digits of a given number is palindrome number or not.

Input:

The first line of the input contains T denoting the number of testcases.Then each of the T lines contains single positive integer N denoting the value of number.

Output:
Output "YES" if pallindrome else "NO". (without the quotes)
​
Constraints:

1<=T<=100
1<=N<=1000

Example:

Input:
2
56
98

Output:
YES
NO

*/

#include<iostream>
using namespace std;

int sumofdig(int n)
{
    int sum=0;
    while(n)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}

int main()
 {
    int t,n,r,z,num;
    cin>>t;
    while(t--)
    {
        r=0;
        cin>>n;
        z=sumofdig(n);
        num=z;
        while(z)
        {
            r=r*10+z%10;
            z=z/10;
        }
        if(r==num)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
