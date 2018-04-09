/*
Suppose you are car driver and you have to drive a car on a track divided into "N" no. of sub-tracks. You are also given the value of "K" i.e. the total kilometers a car can drive on each sub-track. If the car can't cover a sub-track, you can add any unit of Petrol in it. With each unit of petrol added, the total kilometers your car can travel will increase by one unit .

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two space separated integers N and K. The second line of each test case contains N space separated integers (A[])  denoting the distance of each N sub-tracks.


Output:
For each test case in a new line you have to print out the minimum unit of Petrol your car require to cover all the sub-tracks. If no extra unit of petrol is required, print -1.

Constraints:
1<=T<=100
1<=N,K<=200
1<=A[]<=1000

Example:
Input:
2
5 7
2 5 4 5 2
5 4
1 6 3 5 2
Output:
-1
2

Explanation:
In Case 2, you are given 5 sub-tracks with different kilometers. Your car can travel 4 km on each sub-track. So, when you come on sub-track 2nd you have to cover 6 km of distance, so you need to have 2 unit of petrol more to cover the distance, for 3rd sub-track, now your car can travel 6 kilometers, so no problem and so on.

*/

#include<iostream>
using namespace std;

int main()
 {
	int t,n,k,flag,i,d,max;
	cin>>t;
	while(t--)
	{
	    max=0;
	    flag=1;
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]>k)
	        {
	            flag=0;
	            d=a[i]-k;
	            if(d>max)
	            max=d;
	        }
	    }
	    if(flag)
	    cout<<"-1"<<endl;
	    else
	    cout<<max<<endl;
	}
	return 0;
}
