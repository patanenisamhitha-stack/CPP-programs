#include <iostream>
using namespace std;
int main() {
    int n,rev=0;
    cout<<"enter a num:";
    cin>>n;
    while(n!=0)
    {
        int p=n%10;
        rev=rev*10+p;
        n=n/10;
    }
    cout<<rev;
}
