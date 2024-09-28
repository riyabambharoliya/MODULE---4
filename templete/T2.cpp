//QUE.2 : Write a program of to sort the array using templates

#include<iostream>
using namespace std;
template<typename T,int size>
void sortarr(T (&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[5] = {17,15,11,19,14};
	char b[5] = {'N','M','O','E','Y'};
	float c[3] = {78.63,25.73,99.72};
	
	sortarr(a);
	sortarr(b);
	sortarr(c);
	
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<5;i++)
	{
		cout<<b[i]<<" ";
	}
	cout<<"\nArray after sorting := ";
	for(i=0;i<3;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}

