#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter n : ";
    cin>>n;
    int count=0,max=0,min=99999999;
    double avg;
    for(int i=1;i<=n;i++){
        int k=0;
        cout<<"Enter a no. : ";
        cin>>k;
        if(k>max)
            max=k;
        if(k<min)
            min=k;
        count++;
        avg+=k;
    }
    avg=avg/count;
    cout<<endl<<endl<<"Count : "<<count<<endl;
    cout<<"Maximum no : "<<max<<endl;
    cout<<"Minimum no : "<<min<<endl;
    cout<<"Average : "<<avg<<endl;


    return 0;
}