#include<iostream>
using namespace std;
int main()
{
    int v1=100;
    cin>>v1;
    cout<<"When try block not in use"<<endl;
    try
    {
        cout<<"Inside the try block uses"<<endl;
    if (v1<100)
    {throw v1;
    cout<<"After Exception is block -thrown exception."<<endl;
        
    }
    
    }
    catch(int v1)
    {
        cout<<"Exception mangae here in catch block"<<endl;
    }
    
}
