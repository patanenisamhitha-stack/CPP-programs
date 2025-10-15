#include<iostream>
using namespace std;
template<typename T>
T swapvalues(T &a,T &b){
	T c=a;
	a=b;
	b=c;
}
int main(){
	cout<<"Swap x and y:"<<swapvalues(x=10,y=20)<<endl;
	cout<<"Swap x and y"<<swap(x=30.5,y=45.6)<<endl;
	return 0;
}
