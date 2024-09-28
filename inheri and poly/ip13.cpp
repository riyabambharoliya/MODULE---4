/*13.Write a program to find the max number from given two numbers
using friend function*/

#include<iostream>
using namespace std;
class Number
{
	private: 
	      int num1,num2;
	public:
		void setvalue(int n1,int n2)
		{
			num1=n1;
			num2=n2;
		}
		friend void maxvalues(Number &obj);
		void display()
		{
			cout<<"\n enter the number1:"<<num1;
			cout<<"\n enter the number2:"<<num2;
		}
};
void maxvalues(Number &obj)
{
	if(obj.num1>obj.num2)
	{
		cout<<"\n number1 s maximum.";
	}
	else
	{
		cout<<"\n number2 is maximum.";
	}
}
int main()
{
	Number n1;
	n1.setvalue(45,90);
	n1.display();
	maxvalues(n1);
	return 0;
}
