# include<iostream>
using namespace std;
void cond(int a, int *p)
{
//this statement checks if the addresses passed are valid or not
//in assembly lang transaltion it 1st testl %eax,%eax which will always result to 1 ' d since the next
//command is je(which should have 0 for jump) it will not jump and similary for second address    
 if (p & &a > 0)
 *p += a; 
}
int main()
{
    int no =5;
    int num=6;
    cond(no,&num);
    cout<<num;
    cout<<endl;
    system("pause");
    return 0;
}

    
