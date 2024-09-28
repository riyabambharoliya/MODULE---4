/*QUE.11 : Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;
class demo
{
	public :
		void shape(string n, int l, int b)
		{
			cout<<"\n area of "<<n<<"is = "<<l*b;
		}
		void shape(string n, double base, double height)
		{
			cout<<"\n area of "<<n<<"is = "<<0.5*(base*height);
		}
		void shape(string n, double r)
		{
			cout<<"\n area of"<<n<<"is = "<<3.14*r*r;
		}
};
int main()
{
	demo d1;
	d1.shape("rectangle",5,6);
	demo d2;
	d2.shape("tringle",5.3,1.2);
	demo d3;
	d3.shape("circle",4.5);
}
