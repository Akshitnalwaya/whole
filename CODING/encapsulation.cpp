#include<iostream>
using namespace std;
class student{
	
		int n; //this both two are encapsulated which mean they are
		string name;// hdie to other classes and can not be access diretcley 
		public://in short i am accessing menber of private with help of constructor
		void getdata()
		{
			cout<<n<<name;
		}
		student (int N, string NAME)
		{
             n=N;
			 name =NAME;

		}

};
int main()
{
	student s1= student(12,"AKshit");
	s1.getdata();
}