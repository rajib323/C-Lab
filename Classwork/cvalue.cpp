#include <iostream>
using namespace std;

int sum(int a,int b);

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;

 
   cout << "After addition :" << sum(a,b);
 
   return 0;
}

int sum(int a, int b){
    return a+b;
}