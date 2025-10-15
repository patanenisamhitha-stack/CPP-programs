#include<iostream>
using namespace std;
class D{
	public:
		void displayD(){
			cout<<"Class D is created."<<endl;
		}
};
class E:public D{
	public:
		void displayE(){
			cout<<"Class E is created."<<endl;
		}
};
class F:public E{
	public:
		void displayF(){
			cout<<"Class F is created."<<endl;
		}
};
int main(){
	F f;
	f.displayD();
	f.displayE();
	f.displayF();
	return 0;
}
