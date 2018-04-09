/*
For 2 given numbers find out their LCM and GCD.

Input:
The first line contains an integer 'T' denoting the total number of test cases. In each test cases, there are two numbers a and b.


Output:
Find LCM and HCF. 


Constraints:
1 <= T <= 30
1 <= a <= 1000
1 <= b <= 1000


Example:
Input:
2

5 10

14 8

Output:
10 5
56 2

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,a,b,lcm,hcf,i,max;
	cin>>t;
	while(t--)
    {
        
     cin>>a>>b;
     max=a>b?a:b;
     for(int i=1;i<=max;i++)
     if(a%i==0 && b%i==0)
     hcf=i;
     lcm=(a*b)/hcf;
     cout<<lcm<<" "<<hcf<<endl;
       }
	return 0;
}
