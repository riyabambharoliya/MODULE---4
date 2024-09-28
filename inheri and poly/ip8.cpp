/*QUE.8 : Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include<iostream>
using namespace std;
class Mathoperation 
{
	public :
		void add(int a, int b)
		{
			cout<<"\n addition od two number is = "<<a+b;
		}
		void add(float a,float b)
		{
			cout<<"\n addtion of two number is = "<<a+b;
		}
		void sub(int a, int b)
		{
			cout<<"\n subtraction of two number is = "<<a-b;
		}
		void sub(float a, float b)
		{
			cout<<"\n subtraction of two number is = "<<a-b;
		}
		void mul(int a,int b)
		{
			cout<<"\n multiplication of two number is = "<<a*b;
		}
	    void mul(float a,float b)
		{
			cout<<"\n multiplication of two number is = "<<a*b;
		}
		void div(int a,int b)
		{
			cout<<"\n divison of two number is = "<<a/b;
		}
		void div(float a,float b)
		{
			cout<<"\n division of two number is = "<<a/b;
		}						
};
int main()
{
	Mathoperation m1;
	m1.add(2,3);
	Mathoperation m2;
    m2.add(2.3f,5.6f);
    
    Mathoperation m3;
    m3.sub(9,5);
   	Mathoperation m4;
   	m4.sub(98.25f,56.45f);
 
    Mathoperation m5;
    m5.mul(11,12);
    Mathoperation m6;
    m6.mul(45.12f,33.45f); 
   
    Mathoperation m7;
    m7.div(9,8);
    Mathoperation m8;
    m8.div(15,7);

	return 0;
	
}


