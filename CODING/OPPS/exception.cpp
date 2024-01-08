#include<iostream>
using namespace std;
int main(){
    float N,D,R;
    cout<<"Enter numerator";
    cin>>N;
    cout<<"Enter Denominator";
    cin>>D;
    try
    {
        if (D==0)
        {
            throw 0;
        }
        R=N/D;
        cout<<"N is"<<N<<"/"<<"Dis"<<"="<<R;
        
    }
    catch(int NDRrexception)
    {
        cout<<"logical Error:Cantdivide by zero"<<NDRrexception;
    }
    

} 
