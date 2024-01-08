    #include<iostream>
    using namespace std;
    class student{
    int a,b,c;
    public :
    int d,e;
    };
    student fun(int a,int b, int c)
    {
        cout<<a<<b<<c;
    }
    int main()
    {
        fun(1,2,3);
    }