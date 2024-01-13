#include<iostream>
using namespace std;
int main()
{
	float per,a;
	cout<<"Total Marks = 1100";
	cout<<"\nEnter Obtain marks = ";
	cin>>a;
	per=(a/1100)*100;
	
	if(per<=30)
	{
		cout<<"Fail";
		cout<<"\nPercentage = "<<per<<"%";
	}else
	{
		cout<<"Pass Congratulations";
		cout<<"\nPercentage = "<<per<<"%";
	}
}
