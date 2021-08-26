#include <iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter a integer : ";
    cin>>ch;
    int k=(rand() % 100) + 1;
    if(ch==k)
        cout<<"Right guess";
    else if(ch>k)
        cout<<"Too Great";
    else
        cout<<"Too Low";
}