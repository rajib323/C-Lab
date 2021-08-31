#include <iostream>
#include <cmath>
using namespace std;
struct inch_feet
{
    double inch=0;
    double feet=0;
};
typedef inch_feet infeet;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    infeet arr[n];
    for(int i=0;i<n;i++){
        //double k=0;
        cout<<"\nEnter feet : ";
        cin>>arr[i].feet;
        cout<<"Enter inch : ";
        cin>>arr[i].inch;
    }

    double sum_inch,sum_feet;
    for (int i = 0; i < n; i++)
    {
        sum_inch+=arr[i].inch;
        sum_feet+=arr[i].feet;
    }
    double k=floor(sum_inch/12);
    /*sum_feet=sum_feet+floor(sum_inch/12);*/
    sum_inch=sum_inch-k*12.0;

    cout<<"\nFeet Sum : "<<sum_feet+k<<endl;
    cout<<"\nInch Sum : "<<sum_inch<<endl;
    return 0;
}
