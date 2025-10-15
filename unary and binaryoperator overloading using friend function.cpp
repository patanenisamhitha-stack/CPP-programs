#include<iostream>
using namespace std;
class number{
	private:
		int value;
		public:
			number(int v=0){
				value=v;
			}
			friend number operator -(number n);
			friend number operator +(number n1,number n2);
			void display(){
			cout<<"value="<<value<<endl;
			}
};
number operator -(number n){
	return number(-n.value);
}
number operator +(number n1,number n2){
	return number(n1.value + n2.value);
}
int main(){
	number a(15),b(5),result;
	cout<<"original value:"<<endl;
	a.display();
	b.display();
	result=a+b;
	cout<<"after binary + operator(a + b):"<<endl;
	result.display();
	result = -a;
	cout<<"after unary - operator(-a):"<<endl;
	result.display();
	return 0;
}
