//QUE.9 : Write a Program of Two 1D Matrix Addition using Operator Overloading
#include<iostream>
using namespace std;
class Matrix
{
	private :
		int arr[100],size,i;
	public :
	void set()
	{
		cout<<"\n enter size = ";
		cin>>size;
	    for(i=0;i<size;i++)
	    {
	    	cin>>arr[i];
		}
	}
	void get()
	{
		for(i=0;i<size;i++)
		{
			cout<<arr[i]<<"\t";	
		}
	}
	Matrix operator+(Matrix obj)
	{
		Matrix temp;
		temp.size = size;
		for(i=0;i<size;i++)
		{
			temp.arr[i] =arr[i]+obj.arr[i];
		}
		return temp;
	}	
};
int main()
{	
    Matrix m1;
    cout<<"\n matrix 1 ";
    m1.set();
    m1.get();
    
    Matrix m2;
    cout<<"\n matrix 2 ";
    m2.set();
    m2.get();
    
	Matrix m3 = m1 + m2;
	cout<<"\n matrix is = ";
	m3.get();     
}

