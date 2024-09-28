/*5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;
class Rectangle
{
	private :
		float length;
		float width;
	public :
		float set(float l,float w)
		{
			length = l;
			width = w;
		}
		float area()
		{
			return (length*width);
		}
		float perimeter()
		{
			return (length+width)*2;
		}	
};
int main()
{
	float length,width;
	cout<<"\n enetr the length = ";
	cin>>length;
	cout<<"\n enter the width = ";
	cin>>width;
	Rectangle r1;
	r1.set(length,width);
    r1.area();
    r1.perimeter();
    cout<<"\area of rectangle is = "<<r1.area();
	cout<<"\nperimeter of circle is = "<<r1.perimeter();
	return 0;
}



