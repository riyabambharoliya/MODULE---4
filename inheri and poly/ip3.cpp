/*QUE. 3 Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)*/

#include<iostream>
using namespace std;
class person
{
	public :
	void inputvalue(string name,int age)
	{
		cout<<"\nname is = "<<name;
		cout<<"\nage is = "<<age;
	}
};
class student
{
	public :
		void inputper(float per)
		{
			cout<<"\npercentage is = "<<per;
		}
};
class teacher : public person,public student
{
	public :
	void salary(int sal)
	{
		cout<<"\nsalary = "<<sal;
	}
};
int main()
{
	int age,sal;
	float num;
	string name;
	cout<<"\nEnter the name =";
	cin>>name;
	cout<<"\nEnter the age =";
	cin>>age;
	cout<<"\nEnter the percentage =";
	cin>>num;
	cout<<"\nEnter teacher salary = ";
	cin>>sal;
	teacher t1;
	t1.inputvalue(name,age);
	t1.inputper(num);
	t1.salary(sal);
	return 0;
}
