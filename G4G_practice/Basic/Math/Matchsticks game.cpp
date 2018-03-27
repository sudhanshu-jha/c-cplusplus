/*
A game of matchsticks is played by two friends A and B . In this game a group of matchsticks is placed on the table and then it is reduced  by each player turn vise by removing from the group at least 1 but not more than 4 matchsticks. The player who takes the last match stick is the winner .
What move should A take to win the game if A starts the first.

Note : Consider the game is played optimally.
Input
The first line of input contains an integer T denoting the number of test cases. The next T lines contains N values i.e. total number of matchsticks  present on table.

Output
For each test case print in a new line  the no of matchsticks a player needs to remove if he is given first turn .If its not possible for A to win the game print -1 .

Constraints:
1<=T<=100
1<=N<=100

Example
Input : 
3
48
71
15

Output : 
3
1
-1

*/

#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n%5==0)
	    cout<<"-1"<<endl;
	    else
	    cout<<n%5<<endl;
	}
	return 0;
}
