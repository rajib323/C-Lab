#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	float p,r,t,ci;
	
	cout<<"Enter Principle, Rate and Time:\n";
	cin>>p>>r>>t;
	
	ci=p*pow((1+r/100),t)-p;
	
	cout<<"\nCompound Interest = "<<ci;
}