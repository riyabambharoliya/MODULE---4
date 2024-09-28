/*QUE.6 : Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include<iostream>
using namespace std;
class Employee
{
	private :
		string name;
		int id;
	    char grade;
	public :
		Employee(string n,int i,char g)
		{
			name=n;
			id=i;
			grade=g;
		}
		void setsalary()
		{
			if(grade=='A')
			{
			    cout<<"\nsalary is ="<<100000;	
			}
			else if(grade=='B')
			{
				cout<<"\nsalary = "<<50000;
			}
			else
			{
				cout<<"\nsalary = " <<25000;
			}
		}
	    void display()
		{
			cout<<"\n enter name = "<<name;
			cout<<"\n enetr id = "<<id;
			cout<<"\n performance grade = "<<grade;
		}
};
int main()
{
    Employee e1("riya",101,'A');
	e1.display();
	e1.setsalary();
	return 0;
}		
		
		
	    	

