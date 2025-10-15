//Write a program to demanustrate the use of default constuctor
#include<iostream>
using namespace std;
class student
{
	public:
		int x;
		student(){
		x=26;
	}
};
int main()
{
	student roll;
	cout<<roll.x;
}
