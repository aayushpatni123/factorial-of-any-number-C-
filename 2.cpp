#include<iostream>
using namespace std;
int factorial(int x)
{
    
   int fact=1;
	if(x<0)
	{
		cout<<"error ";
		return 0;
	}
	else
	{
		for(int i=1;i<=x;i++)
		{
			fact=fact * i;		
		}
	}
	return fact;
}
int main()
{
	int num1;
	cout<<"enter number ";
	cin>>num1;
	cout<<"the result is "<<factorial(num1);
	return 0;

}
