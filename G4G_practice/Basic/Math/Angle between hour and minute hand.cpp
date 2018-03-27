/*
Calculate the angle between hour hand and minute hand.

There can be two angles between hands, we need to print minimum of two. Also, we need to print floor of final result angle. For example, if the final angle is 10.61, we need to print 10.

 

Input:

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consists of one line conatining two space separated numbers h and m where h is hour and m is minute.

Output:
Coresponding to each test case, print the angle b/w hour and min hand in a separate line.

Constraints:

1 ≤ T ≤ 100
1 ≤ h ≤ 12
1 ≤ m ≤ 60

Example:

Input
2
9 60
3 30

Output
90
75

*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	int t;
	float hang,mang,ang1,ang2,h,m,min,diff;
	cin>>t;
	while(t--)
	{
	    min=361;
	    cin>>h>>m;
	    hang=h*30+(m)*0.5;
	    mang=m*6;
	    diff=abs(hang-mang);
	    ang1=360-diff;
	    ang2=diff;
	    min=ang1<ang2?ang1:ang2;
	    cout<<floor(min)<<endl;
	    cout<<int(min)<<endl;
	    	    
	}
	return 0;
}
