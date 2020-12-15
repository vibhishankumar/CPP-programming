#include<iostream>
using namespace std;
/*
1.Not in scope of class means after becoming friend it may use data member as well
private member of that class
2.Since it is not in the scope of class so it can't be called through object of that class
3.usually cantains object as arguments
4.Can be declared inside private or public section
5.It can't access the members directly with their name it can be done with object name with dot
*/
class complex{
    private:
    int a,b;
    friend complex sumcomplex(complex o1,complex o2);
    public:
    void setnumber(int n1,int n2)
    {
        a=n1;b=n2;
    }
    void printComplx()
    {
        cout<<a<<" + "<<b<<"i"<<endl;
    }
    //declaring friend function 
    //friend function can access all private and public data members of class
    //here friend function takes two arguments of objects
   // friend complex sumcomplex(complex o1,complex o2);
};
complex sumcomplex(complex o1,complex o2)
{
    complex c3;
    //as
    c3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    //object with dot and function
    cout<<"inside friend function"<<endl;
    c3.printComplx();
    return c3;
}
int main()
{
    complex c1,c2,sum;
    c1.setnumber(1,4);
    c1.printComplx();
    c2.setnumber(5,8);
    c2.printComplx();
    sum=sumcomplex(c1,c2);
    //sum of complex number
    cout<<"sum of comlpex"<<endl;
    sum.printComplx();
}