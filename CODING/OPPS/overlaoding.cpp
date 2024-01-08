#include<iostream>
using namespace std;
class displaydata{
    public:
    void show(int v1){
        cout<<"integer var.value: "<<v1<<endl;
            }
            void show(double v2){
        cout<<"floating var.value: "<<v2<<endl;
      }
      void show(char* v3){
        cout<<"charactr var.value: "<<v3<<endl;

      }
};
int main(void){
    displaydata obj1;
    obj1.show(100);
    obj1.show(991.75);
    obj1.show("fuction overloading ");
    return 0;

}