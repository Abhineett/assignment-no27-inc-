#include<iostream>
using namespace std;
class unary
{

    int a;
public:
    unary():a(5){}




    void display()
    {

        cout<<"a="<<a<<endl;
    }
    void operator++()
    {
        ++a;

    }
    unary operator++(int)
    {
        unary temp;
        temp.a=a++;

        return(temp);
    }
    void operator--()
    {
        --a;
    }
    unary operator--(int)
    {
        unary temp;
        temp.a=a--;
        return temp;
    }



};
int main()
{
    unary num1,num2;

    num1.display();
    cout<<endl;
    ++num1;
    num1.display();
    unary n=num1++;
    n.display();
    num1.display();
    cout<<endl;
    --num2;
    num2.display();
    unary n1=num2--;
    n1.display();
    num2.display();







    return 0;
}
