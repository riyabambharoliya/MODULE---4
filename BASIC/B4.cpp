//1. WAP to create simple calculator using class
#include<iostream>
using namespace std;
class calculator
{
	private :
		int num1,num2;
	public :
		void sum()
		{
			cout<<"\n enter the num1 = ";
			cin>>num1;
			cout<<"\n enter the num2 = ";
			cin>>num2;
			cout<<"\n addition of "<<num1<<" and "<<num2<<" is "<<num1+num2;
		}
		void sub()
		{
			cout<<"\n enter the num1 = ";
			cin>>num1;
			cout<<"\n enter the num2 = ";
			cin>>num2;
			cout<<"\n subctraction of "<<num1<<" and "<<num2<<" is "<<num1-num2;
		}
		void mul()
		{
			cout<<"\n enter the num1 = ";
			cin>>num1;
			cout<<"\n enter the num2 = ";
			cin>>num2;
			cout<<"\n addition of "<<num1<<" and "<<num2<<" is "<<num1*num2;
		}
		void div()
		{
			cout<<"\n enter the num1 = ";
			cin>>num1;
			cout<<"\n enter the num2 = ";
			cin>>num2;
			cout<<"\n addition of "<<num1<<" and "<<num2<<" is "<<num1/num2;
		}
		void mod()
		{
			cout<<"\n enter the num1 = ";
			cin>>num1;
			cout<<"\n enter the num2 = ";
			cin>>num2;
			cout<<"\n addition of "<<num1<<" and "<<num2<<" is "<<num1%num2;
		}				
};

int main()
{
	calculator c1,c2,c3,c4,c5;
	c1.sum();
	c2.sub();
	c3.mul();
	c4.div();
	c5.mod();
}

