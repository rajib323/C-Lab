#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter Any Character: ";
    cin>>c;
    if(isdigit(c)!=0)
     cout<<"It Is A Digit.";
    else if(isalpha(c)!=0)
     cout<<"It Is An Alphabet.";
    else
     cout<<"It Is A Special Character.";
    return 0;
}