#include <iostream>
using namespace std;
int main(){
    int ft,inc;
    cout<<"Enter length (in ft and inches) : ";
    cin>>ft>>inc;
    cout<<"Length (in cm) : "<<(ft*12+inc)*2.54;
}