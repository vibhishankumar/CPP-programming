#include<iostream>
using namespace std;
int count=0;
class num{
  public:
   num()
   {
       count++;
       cout<<"inside constructor "<<count<<endl;
   }
   ~num()
   {
       cout<<"inside destructor "<<count<<endl;
       count--;
   }
};
int main()
{
    cout<<"inside main method "<<endl;
    num n1;
    {
        cout<<"inside block of code "<<endl;
        num n2,n3;
        cout<<"exiting block "<<endl;
        //while execution of block completed code segment destroy
    }
    cout<<"exiting main"<<endl;
}