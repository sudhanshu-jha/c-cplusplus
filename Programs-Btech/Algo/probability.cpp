#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
double a, b, c, d;
cin>>a>>b>>c;
d=c*(((1-a)*b)+(1-b)*a);
// cout<<setprecision(6)<<d;
std::cout << std::fixed;
std::cout << std::setprecision(6) << d << '\n';
return 0;
}

	