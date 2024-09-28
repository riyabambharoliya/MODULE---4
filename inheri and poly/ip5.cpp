/*QUE. 5 : Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include<iostream>
using namespace std;
class student 
{
	private :
		int roll;
	public :
		void setroll()
		{
			cout<<"\n enter the roll number = ";
			cin>>roll;
		}
		void getroll()
		{
			cout<<"\n roll = "<<roll;
		}
};
class test
{
	protected :
		int sub1, sub2;
	public :
		void setmarks()
		{
			cout<<"\n enter the marks of subject 1 = ";
			cin>>sub1;
			cout<<"\n enter the marks of subject 2 = ";
			cin>>sub2;
		}
		void getmarks()
		{
			cout<<"\n subject 1 marks = "<<sub1;
			cout<<"\n subject 2 marks = "<<sub2;
		}
};
class result : public student, public test
{
	protected :
		int total;
	public :
	    void caltotal()
		{
			total=sub1+sub2;
			cout<<"\n total marks is = "<<total;
		}
		void display()
		{
			getroll();
			getmarks();
			caltotal();
		}	
};
int main()
{
	result r1;
	r1.setroll();
	r1.setmarks();
	r1.display();
}

