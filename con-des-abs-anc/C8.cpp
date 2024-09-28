/*QUE. 8 : Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/

#include<iostream>
using namespace std;
class Student
{
	private :
		int roll,sub1,sub2,std;
		string name;
	public :
		Student(int roll,string name,int sub1,int sub2,int std)
		{
			this->roll = roll;
			this->name = name;
			this->sub1 = sub1;
			this->sub2 = sub2;
			this->std = std;
		}
		string getname()
		{
			return name;
		}
		int getstd()
		{
			return std;
		}
		void grade()
		{
			if(sub1+sub2>150)
			{
				cout<<"A";
			}
			else
			{
				cout<<"B";
			}
		}
};
class Address
{
	private :
		string city;
		Student *ref;
	public :
		Address(string city,Student *ref)
		{
			this->city = city;
			this->ref = ref;
		}
		void display()
		{
			cout<<"\nStudent name = "<< ref->getname();
			cout<<"\n Class Name="<< ref->getstd();
			
			cout<<"\nGrade = ";
			ref->grade();
			cout<<"\nCity = "<<city;
		}
};
int main()
{
	Student s1(101,"DOREMON",75,65,12);
	Address a1("KAWASAKKI",&s1);
	
	Student s2(102,"BHEEM",85,90,11);
	Address a2("DHOLAKPUR",&s2);
	
	a1.display();
	a2.display();
	return 0;
}






