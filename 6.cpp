#include<iostream>
#include<string.h>
using namespace std;
class CString
{
public:

    char str[20];
public:
    void acceptstring()
    {
        cout<<"Enter string."<<endl;
        cin>>str;



    }
    void display()
    {

        cout<<str<<endl;
    }
    CString operator+(CString s)
    {
        CString s1;
        strcpy(s1.str,str);
        strcat(s1.str,s.str);
        return s1;
    }
    int operator==(CString &t)
    {

    }



};

int main()
{
    CString str1,str2,str3;
    int result=0;
    str1.acceptstring();
    str2.acceptstring();
    cout<<"First string is........ ";
    str1.display();
    cout<<"second string is....... ";
    str2.display();
    str3=str1+str2;
    cout<<"After concatenate string is...... ";
    str3.display();
    result=str1==str2;
    if(result==0)
    {
        cout<<"Both string are equal.";
    }
    else
    {

        cout<<"Both string are not equal.";
    }








    return 0;
}
