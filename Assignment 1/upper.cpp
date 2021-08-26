#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(97>=ch<=120){
        ch=ch-32;
    }
    cout<<"\nCapital : "<<ch;
}