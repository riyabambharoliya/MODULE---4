/*QUE. 3 Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
using namespace std;
class Car
{
	private:
		string company;
		int year;
		string model;
	public:
		void set(string c,int y,string m)
		{
			company=c;
			year=y;
			model=m;
		}
		void get()
		{
			cout<<"\n Company Name="<<company;
			cout<<"\n Year="<<year;
			cout<<"\n Model Name="<<model;
		}
};
int main()
{
	string company,model;
	int year;
	cout<<"\n Enter The Company Name: ";
	cin>>company;
	cout<<"\n Enter The Year:";
	cin>>year;
	cout<<"\n Enter The Model Name:";
	cin>>model;
	Car c1;
	c1.set(company,year,model);
	c1.get();
	return 0;
}

