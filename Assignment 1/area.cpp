#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	double s,area;
	cout<<"the sides of the traingle are: ";
	cin>>a>>b>>c;
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"\nthe area of the traingle is:"<<area;
}