/*
Given a quadratic equation in the form ax2 + bx + c, find floor of roots of it.  For example floor of 5.6 is 5.

Input:  First line contains an integer, the number of test cases 'T'. Each test case should contain three positive numbers a,b and c.

Output:  If roots of equations exits, then print the two roots separated by space (Higher valued root should be printed before lower valued). Else if a = 0, then print "Invalid" as equation is not quadratic.  If roots are imaginary, then print "Imaginary"

Constraints:
1<=T<=50
1<=a<=1000
1<=b<=1000
1<=c<=1000


Example:
Input:
3
1 -2 1
1 -7 12
1 4 8

Output:
1 1
4 3
Imaginary

*/

#include<iostream>
#include<cmath>
using namespace std;
void find_roots(int a, int b, int c){
    int r = (b * b) - (4 * a * c);
    float first = ((-1 * b) + sqrt(r)) / (2 * a);
    float second = ((-1 * b) - sqrt(r)) / (2 * a);
    cout << floor(first) << " " << floor(second) << endl;
}

int main()
 {
	int T;
	cin >> T;
	while(T--){
	    int a, b, c;
	    cin >> a >> b >> c;
	    if(a == 0)
	        cout << "Invalid" << endl;
	    else{
	        int r = (b * b) - (4 * a * c);
	        if(r < 0)
	            cout << "Imaginary" << endl;
	        else{
	            find_roots(a, b, c);
	        }
	    }
	}
	return 0;
}
