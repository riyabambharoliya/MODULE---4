/*QUE.6 : Write a C++ Program to show access to Private Public and Protected using
Inheritance*/

#include<iostream>
using namespace std;
class student
{ 	
    private :
    	int roll;
    	string name;
    public :
	void setroll()
	{
		cout<<"\n enter roll number = ";
		cin>>roll;
		cout<<"\n enter name = ";
		cin>>name;
	}
	void getroll()
	{
		cout<<"\n roll number = "<<roll;
		cout<<"\n name = "<<name;
	}	
};
class marks : public student
{
	protected :
		int marks;
	public :
		void setmarks()
		{
			cout<<"\n enter marks = ";
			cin>>marks;
		}
		void getmarks()
		{
			cout<<"\n marks = "<<marks;
		}
};
int main()
{
	marks m1;
	m1.setroll();
	m1.setmarks();
	m1.getroll();
	m1.getmarks();
}

