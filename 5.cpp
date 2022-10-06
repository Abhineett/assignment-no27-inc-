#include<iostream>
using namespace std;
class Number
{

    int x,y,z;
public:
     void setvalue()
    {
       cout<<"Enter Three number."<<endl;
       cout<<"x="<<" ";
       cin>>x;
       cout<<endl;
       cout<<"y="<<" ";
       cin>>y;
       cout<<endl;
       cout<<"z="<<" ";
       cin>>z;
       cout<<endl;

    }
    void displaynumber()
    {
        cout<<"x="<<x<<"\n"<<"y="<<y<<"\n"<<"z="<<z<<endl;
    }
    void operator-()
    {
        x=-x;
        y=-y;
        z=-z;
    }

};
int main()
{
    Number n1;
    n1.setvalue();
    cout<<"Numbers are:"<<endl;;
    n1.displaynumber();
    -n1;
    cout<<endl;
    n1.displaynumber();

    return 0;
}
