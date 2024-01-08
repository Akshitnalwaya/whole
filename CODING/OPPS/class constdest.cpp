#include <iostream>
using namespace std;
class rectangle
{
public:
    // int l=1;
    // int b;
    // rectangle(){ //default constructor ---->  which mean no agrument is passed.
    //     l=0;
    //     b=0;
    // }
    int l, b;
    rectangle(int x, int y)
    { // parameterised const. ---> agrument is passed
        l = x;
        b = y;
    }
    rectangle (rectangle& r2)
    {
l=r2.l;
b=r2.b;
    }
    rectangle ()
    {
      cout<<"This is distructor";
    }
};
int main()
{
    // rectangle r1;
    // cout<<r1.b<<" "<<r1.l<<endl;
    rectangle r2(9, 0);
    cout << r2.b << " " << r2.l << endl;
     rectangle r=r2;
    cout << r.b << " " << r.l << endl;
}