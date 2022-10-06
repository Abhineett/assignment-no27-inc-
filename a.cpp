#include<iostream>
using namespace std;
class complex
{

    int a,b;
public:
    void setdata(int a,int b)
    {
        this->a=a;
        this->b=b;


    }
    complex operator+(complex  c)
    {
        complex res;

        res.a=a+c.a;
        res.b=b+c.b;
        return(res);

    }
    complex operator-(complex  c)
    {
        complex res;

        res.a=a+c.a;
        res.b=b+c.b;
        return(res);

    }
    complex operator *(complex  c)
    {
        complex res;

        res.a=a+c.a;
        res.b=b+c.b;
        return(res);

    }
    complex operator ==(complex  c)
    {
        complex res;

        res.a=a+c.a;
        res.b=b+c.b;
        return(res);

    }
    void printf()
    {
        cout<<a<<"+"<<b<<"!"<<endl;
    }


};
int main()
{
    complex c1,c2,c3;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.printf();
    c3=c1-c2;
    c3.printf();
    c3=c1*c2;
    c3.printf();
    c3=c1==c2;
    c3.printf();



    return 0;
}
