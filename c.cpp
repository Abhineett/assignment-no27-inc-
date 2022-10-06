#include<iostream>
using namespace std;
class time
{
  int Hour,Minute,Second;
  public:
      void accepttime(int h,int m,int s)
      {
          Hour=h;
          Minute=m;
          Second=s;

      }
      void display()
      {
          cout<<"First Time"<<endl;
          cout<<"Hour    :"<<Hour<<endl;
          cout<<"Minute  :"<<Minute<<endl;
          cout<<"Second  :"<<Second<<endl;
      }
      void display(int x)
      {
          cout<<"second Time"<<endl;
          cout<<"Hour    :"<<Hour<<endl;
          cout<<"Minute  :"<<Minute<<endl;
          cout<<"Second  :"<<Second<<endl;
      }
      void operator==(time t)
      {
          if(Hour==t.Hour&&Minute==t.Minute&&Second==t.Second)
            cout<<"Times are Same";
          else
            cout<<"Times are not Same";
      }


};
int main()
{
    time t1,t2;
    cout<<"Enter First Time"<<endl;
    cout<<"--------------------"<<endl;
    int Hour,Minute,Second;
    cout<<"Enter Hour  : ";
    cin>>Hour;
    cout<<endl;
    cout<<"Enter Minute: ";
    cin>>Minute;
    cout<<endl;

    cout<<"Enter Second: ";
    cin>>Second;
    cout<<endl;
    t1.accepttime(Hour,Minute,Second);
    t1.display();
    cout<<"Enter second Time"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Enter Hour  : ";
    cin>>Hour;
    cout<<endl;
    cout<<"Enter Minute: ";
    cin>>Minute;
    cout<<endl;

    cout<<"Enter Second: ";
    cin>>Second;
    cout<<endl;
    t2.accepttime(Hour,Minute,Second);
    t2.display(1);
    cout<<endl;
    t1.operator==(t2);




    return 0;
}
