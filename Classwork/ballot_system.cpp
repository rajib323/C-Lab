#include <iostream>
using namespace std;
int main(){
    int *arr;
    arr=(int*)calloc(6,sizeof(int));
    while (true)
    {
        int k=0;
        cout<<"Enter candidate(0 for exit) : ";
        cin>>k;
        if(k==0)
            break;
        else if(k>5)
            arr[0]++;
        else
            arr[k]++;
    }


    cout<<"Spilled Votes : "<<arr[0]<<endl;
    cout<<"Candidate 1 : "<<arr[1]<<endl;
    cout<<"Candidate 2 : "<<arr[2]<<endl;
    cout<<"Candidate 3 : "<<arr[3]<<endl;
    cout<<"Candidate 4 : "<<arr[4]<<endl;
    cout<<"Candidate 5 : "<<arr[5]<<endl;
    
}