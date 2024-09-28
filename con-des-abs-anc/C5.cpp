/*QUE.5 : Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene*/

#include<iostream>
using namespace std;
class Triangle
{
	private :
		float side1,side2,side3;
	public :
	    Triangle(float s1, float s2, float s3)
		{
			side1=s1;
			side2=s2;
			side3=s3;
		}
	void display()
	{
		if(side1==side2 && side2==side3 && side1==side3)
		{
			cout<<"\n tringle is equilator";
		}
		else if(side1==side2 || side2==side3 || side3==side1)
		{
			cout<<"\n tringle is isosceles";
		}
		else
		{
			cout<<"\n tringle is scalene";
		}
	}	
			
};
int main()
{
	int side1,side2,side3;
	cout<<"\n enterthe side1 = ";
	cin>>side1;
	cout<<"\n enterthe side2 = ";
	cin>>side2;
	cout<<"\n enterthe side3 = ";
	cin>>side3;
	
	Triangle T1(side1,side2,side3);
	T1.display();
	return 0;	
}
