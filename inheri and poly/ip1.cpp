/*QUE. 1 : Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include<iostream>
using namespace std;
class Cricketer
{
	protected:
       string name;
       int match;
	public :
      
	void inputdata1(string n,int m)
	{
		name=n;
		match=m;
	}
	void displaydata1()
	{
		cout<<"\n name = "<<name;
		cout<<"\n match = "<<match;
	}  
	     
};
class Batsman : public Cricketer
{
	private :
		int totalrun;
	    float average;
		string performance;
	public:
	void inputdata2()
	{
		cout<<"\n enter totalrun = ";
		cin>>totalrun;
		cout<<"\n performance = ";
		cin>>performance;
	}
	void calculateavaragerun()
	{
		Cricketer::displaydata1();
		average =(float)totalrun/(float)match;
	}
	void displaydata2()
	{
		cout<<"\n totalrun is = "<<totalrun;
		cout<<"\n avarage is = "<<average;
		cout<<"\n performance is = "<<performance;
	}			
};
int main()
{
    Batsman b1;
    b1.inputdata1("ShubhmanGill",5);
    b1.inputdata2();
    b1.calculateavaragerun();
    b1.displaydata2();
    
    return 0;
}
