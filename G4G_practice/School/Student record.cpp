/*
A file contains data as follows( Student name, marks in 3 subjects)
Shrikanth 20 50 60
Kiran 30 80 90
Find the student who has maximum average score.

Input:

The first line of input contains an integer T denoting the number of test cases.
The first line of each test case is N,N is the number of student.
The second line of each test case contains N input Student name and marks in 3 subject.

Output:

Print the student who has maximum average score and maximum average score(in int).

Constraints:

1 ≤ T ≤ 10
1 ≤ N ≤ 15
1 ≤ s ≤ 10
1 ≤ marks ≤ 100

Example:

Input:
2
2
Shrikanth 20 30 10 Ram 100 50 10
3
Adam 50 10 40 Suresh 22 1 56 Rocky 100 90 10

Output:
Ram 53
Rocky 66

*/

#include<iostream>
using namespace std;

struct student{
    string name;
    int marks[3];
    int avg;
};

int main()
 {
     int t,n,avg,sum,max,i,s_i;
     cin>>t;
     while(t--)
     {
         max=0;
         sum=0;
         cin>>n;
         student rec[n];
         for(i=0;i<n;i++)
         {
         cin>>rec[i].name>>rec[i].marks[0]>>rec[i].marks[1]>>rec[i].marks[2];
         sum=rec[i].marks[0]+rec[i].marks[1]+rec[i].marks[2];
         avg=sum/3;
         if(max<avg)
         {
         max=avg;
         s_i=i;
        }
    }
        cout<<rec[s_i].name<<" "<<max<<endl;
     }
	return 0;
}
