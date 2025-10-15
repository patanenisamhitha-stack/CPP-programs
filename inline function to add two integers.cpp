#include<iostream>
using namespace std;
//Inline function to add two integers
inline int add(int a,int b)
{
	return a+b;
}
inline double add(double a,double b)
{
	return a+b;
}
inline int add(int a,int b,int c){
	return a+b+c;
}
inline double add(double a,double b,double c){
	return a+b+c;
}
inline float add(float a,float b){
	return a+b;
}
int main()
{
	cout<<"add(10,20)="<<add(10,20)<<endl;
	cout<<"add(10.3,20.5)="<<add(10.3,20.5)<<endl;
	cout<<"add(10,20,30)="<<add(10,20,30)<<endl;
	cout<<"add(10.2,20.2,30.3)="<<add(10.2,20.2,30.3)<<endl;
	cout<<"add(50.5,77.2)="<<add(50.5,77.2)<<endl;
	return 0;
}
