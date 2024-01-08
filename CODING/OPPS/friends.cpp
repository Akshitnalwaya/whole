#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    friend complex complexadd(complex q1,complex q2);
    void getdata(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    void print()
    {
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
}
;
//making a new function which wiill return type is  complex
complex complexadd(complex o1,complex o2)
{
    complex o3;
    o3.getdata(o1.a+o2.a,o1.b+o2.b);//here when we have not use friends function
    return o3;                      //then it is showing that it is not accesable
}                                   //beacuse both AB are private menber 
int main()
{
    complex c,s,sum;
    c.getdata(12,123);
    s.getdata(9,77);
    c.print();
    sum=complexadd(c,s);
    sum.print();

}
