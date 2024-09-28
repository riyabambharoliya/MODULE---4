/*QUE.1 : Write a program to find the multiplication values and the cubic values using
inline function*/

#include<iostream>
using namespace std;
inline multiply(int num1, int num2)
{
	return num1*num2;
}
inline cubic(int num1)
{
	return num1*num1*num1;
}
int main()
{
	int num1,num2;
	
	cout<<"\n enter num1 = ";
	cin>>num1;
	cout<<"\n enter num2 = ";
	cin>>num2;
	
	cout<<"\n multiplication of "<<num1 <<" and " <<num2 <<" is "<<multiply(num1,num2) <<endl;
	cout<<"\n cubic is = "<<cubic(num1);
	cout<<"\n cubic is = "<<cubic(num2);
}
