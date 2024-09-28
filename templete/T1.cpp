//QUE.1 : Write a program of to swap the two values using template

#include<iostream>
using namespace std;
template <typename T>
void swapvalues(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a=45;
	int b=90;
	cout<<"\nvalue of a before swapping = "<<a;
	cout<<"\nvalue of b before swapping = "<<b;
	swapvalues(a,b);
	cout<<"\nvalue of a after swapping = "<<a;
	cout<<"\nvalue of b after swapping = "<<b;
	
	float p=45.96;
	float q=99.63;
	cout<<"\nvalue of p before swapping = "<<p;
	cout<<"\nvalue of q before swapping = "<<q;
	swapvalues(p,q);
	cout<<"\nvalue of p after swapping = "<<p;
	cout<<"\nvalue of q after swapping = "<<q;
	
	char x='R';
	char y='S';
	cout<<"\nvalue of x before swapping = "<<x;
	cout<<"\nvalue of y before swapping = "<<y;
	swapvalues(x,y);
	cout<<"\nvalue of x after swapping = "<<x;
	cout<<"\nvalue of y after swapping = "<<y;
	return 0;
}

