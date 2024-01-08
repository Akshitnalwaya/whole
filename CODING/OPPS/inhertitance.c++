#include<iostream>
using namespace std;
class parent
{
    int p=1;

    public:
    int y;
    void disp(int y)
    {
        cout<<"Parent "<<p<<endl<<y<<endl;

    }
};
class child :public parent
{  public:
    int as;
       
}; 
int main()
{
    parent p1;
    p1.disp(12);
    child c1;
    c1.disp(14);
    c1.as=12;
    c1.p;

}

