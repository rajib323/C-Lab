#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a amount : ";
    cin>>n;
    //500
    cout<<"500 : "<<n/500<<endl;
    n=n%500;
    cout<<"100 : "<<n/100<<endl;
    n=n%100;
    cout<<"50 : "<<n/50<<endl;
    n=n%50;
    cout<<"20 : "<<n/20<<endl;
    n=n%20;
    cout<<"10 : "<<n/10<<endl;
    n=n%10;
    cout<<"5 : "<<n/5<<endl;
    n=n%5;
    cout<<"2 : "<<n/2<<endl;
    n=n%2;
    cout<<"1 : "<<n/1<<endl;
    n=n%1;

}