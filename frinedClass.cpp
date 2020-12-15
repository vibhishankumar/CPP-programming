#include<iostream>
using namespace std;
class complex; //forward declaration if u want to use class which is not yet declared or define
class calculater{
public:
int add(int a,int b)
{
    return a+b;
}
int sumRealComp(complex,complex);
int sumComComp(complex,complex);
};
class complex{
    private:
    int a,b;
    //individual declaring friend function but if too much function wants to access data them
    //make class as friend
    //friend int calculater::sumRealComp(complex o1,complex o2);
    //friend int calculater::sumComComp(complex o1,complex o2);
    //making whole class as friend
    friend class calculater;  //class calculater is friend of complex and use private data member of 
    //complex class
    public:
    void setnumber(int n1,int n2)
    {
        a=n1;b=n2;
    }
    void printComplx()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculater::sumRealComp(complex o1,complex o2)
{
    return (o1.a+o2.a);
}
int calculater::sumComComp(complex o1,complex o2)
{
    return (o1.b+o2.b);
}
int main()
{
   complex c1,c2;
   c1.setnumber(1,5);
   c1.printComplx();
   c2.setnumber(2,8);
   c2.printComplx();
   calculater calc;
   int res=calc.sumRealComp(c1,c2);
   cout<<"sum of real part "<<res<<endl;
   int res2=calc.sumComComp(c1,c2);
   cout<<"sum of real part "<<res2<<endl;
}