/*QUE.7 : Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/

#include<iostream>
using namespace std;
class Parent
{
	public :
		Parent()
		{
			cout<<"\n parent class constructor called";
		}
};
class Child : public Parent
{
	public :
		Child()
		{
			cout<<"\n child class constructor called";
		}
};
class GrandChild : public Child
{
	public :
		GrandChild()
		{
			cout<<"\n grandChild class constructor called";
		}
};
int main()
{
	GrandChild gc1;
	return 0;
}



