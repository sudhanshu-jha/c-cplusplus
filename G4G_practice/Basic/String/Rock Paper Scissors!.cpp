/*
A tournament is being held for champion players of the game Rock, Paper, and Scissors. For Player A and Player B, determine who wins each game.
The game is a draw if both players choose the same item. Paper wins over rock because paper covers rock. Scissors wins over paper because scissors cuts paper. Rock wins over scissors because rock breaks scissors.

Input:
The first line in the data set is an integer that represents the number of datapairs that follow. The data begins on the second line. R represents rock, P represents paper, and S represents scissors.


Output:
The output is to be formatted exactly like that for the sample output given below.
Assumptions: The only letters in the input will be upper case R, P, and S. The first letter in the pair is the choice for player A and the second letter is the choice for player B.If ‘A’ wins print ‘A’, if ‘B’ wins print ‘B’ and if it draws print ‘DRAW’ for each match.


Constraints:
1<= T <= 50

 

Example:

Input:
7
RR
RS
SR
SP
PP
PS
RP

Output:

DRAW
A
B
A
DRAW
B
B

*/

#include<iostream>
using namespace std;
int main()
 {
	int t;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    if(s[0]==s[1])
	    cout<<"DRAW"<<endl;
	    else if((s[0]=='R' && s[1]=='S') || (s[0]=='S' && s[1]=='P') || (s[0]=='P' && s[1]=='R'))
	    cout<<"A"<<endl;
	    else
	    cout<<"B"<<endl;
	}
	return 0;
}
