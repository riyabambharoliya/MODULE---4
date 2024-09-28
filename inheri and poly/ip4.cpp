//QUE. 4 Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;
class student 
{
	protected :
		string name;
		int roll;
	public :
	void getvalue()
	{
		cout<<"\n enter name = ";
		cin>>name;
		cout<<"\n enter roll number = ";
		cin>>roll;
	}
	void display()
	{
		cout<<"\n name = "<<name;
		cout<<"\n roll number = "<<roll;
	}	
	
};
class marks
{
	protected :
		int phy,chem,math,total;
		float percentage;
	public :
	void getmarks()
	{
		cout<<"\n enter physics marks = ";
		cin>>phy;
		cout<<"\n enter chemistry marks = ";
		cin>>chem;
		cout<<"\n enter maths marks = ";
		cin>>math;
	}
	void displaymarks()
	{
		cout<<"\n physics marks = "<<phy;
		cout<<"\n chemistry marks = "<<chem;
		cout<<"\n math marks = "<<math;
	}
	void calmarks()
	{
		total=phy+chem+math;
		cout<<"\n total marks = "<<total;
	}
	void calpercentage()
	{
		percentage =(float)total / 3;
		cout<<"\n percentage = "<<percentage;
	}
};
class marksheet : public student, public marks
{
	public :
    void displaymarksheet()
    {
		cout<<"\n marks sheet :=";
	    display();
	    displaymarks();
	    calmarks();
	    calpercentage();
	}
};
int main()
{
	marksheet m1;
    m1.getvalue();
	m1.getmarks();
	m1.displaymarksheet();
}



