#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){}
    number(int n){a=n;}
    //copy constructor
    //if no any copy constructor is define then compiler itself provides default copy constructor
    //here after being commenting copy constructor program compile succesfully and show output  
    //same as object passed in constructor
    number(number &x) 
    {
        cout<<"this is copy constructor "<<endl;
        a=x.a;
    }

    void show()
    {
        cout<<"number of this object "<<a<<endl;
    }
};
int main()
{
   /* number o1,o2,o3;
    o3=number(45);
    o3.show();
    //when no coppy constructor is found then compiler supplies its own copy constructor
    o2=number(o3);//copy constructor call
    number z1(o3) ;//copy constructor invoked
    o2.show();
    z1.show();
    //if only assignment operator is used then copy constructor not called
    number z2,z,z3(77);
    z=z3;
    z.show();*/
    number x,y,z(45),z2;
    z.show();
    number z1(z);
    z1.show();//copy constructor invoked;
    z2=z;//copy constructor not invoked if constructor is defined
    //due to already created object
    number z3=z; //in this case constructor is invoked

}