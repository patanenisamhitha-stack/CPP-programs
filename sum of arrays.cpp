#include <iostream>
using namespace std;
int main() {
    int a[10];
    int i,n,sum=0;
    cout<<"Enter no.of elements:";
    cin>>n;
    cout<<"enter array elements:";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
        sum+=a[i];
        cout<<sum;
}
