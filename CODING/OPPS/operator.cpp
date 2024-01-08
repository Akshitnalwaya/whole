#include<iostream>
using namespace std;
class complex
{
    private:
    int real,imag;
    public :
    complex ()
    {
        real=0;
        imag=0;
    }
    complex (int r,int i)
    {
        real=r;
        imag=i;
    }
    complex operator + (complex &obj)
    {
        complex result;
        result.real=real+obj.real;
        result.imag=imag+obj.imag;
        return result;
    }
    void print()
    {
        cout<<"The addition of real and imagnier part is "<<real<<"+"<<imag<<endl;
    }

};
int main()
{
    complex c1(1,2),c2(2,10),c3;
    c3=c1+c2;
    c3.print();
}