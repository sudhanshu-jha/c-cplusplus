#include <iostream>
using namespace std;

int main() {
	//code
	int c,p,r,t,res=0;
	cin>>c;
	while(c--)
	{
	    cin>>p>>r>>t;
	    res=(p*r*t)/100;
	    cout<<res<<endl;
	}
	return 0;
}
