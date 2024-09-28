/*QUE. 2 Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/

#include<iostream>
using namespace std;
class add
{
    public:
    	add(int num1,int num2)
    	{
    		cout<<"\n Addition ="<<num1+num2;
		}
		
};
class sub
{
	public:
		sub(int num1,int num2)
		{
			cout<<"\n Substraction ="<<num1-num2;
		}
};
class mul
{
	public:
		mul(int num1,int num2)
		{
			cout<<"\n Multiplication ="<<num1*num2;
		}
};
class div
{
	public:
		div(int num1,int num2)
		{
			cout<<"\n Division ="<<num1/num2;
		}
};
int main()
{
	int num1,num2;
	cout<<"\n Enter The num1 = ";
	cin>>num1;
	cout<<"\n Enter The num2 = ";
	cin>>num2;
	add a1(num1,num2);
	sub s1(num1,num2);
	mul m1(num1,num2);
	div d1(num1,num2);
	return 0;
}

