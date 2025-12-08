#include<iostream>
using namespace std;
int main()
{
	char grade;
	int years;
	double basic=0,bonus =0,gross =0,tax=0,netsalary=0;
	
	cout<<"Enter the employee grade(A,B,C)";
	cin>>grade;
	cout << "Enter years of service";
	cin >> years;
	if(grade=='A'|| grade =='a')
	  basic=50000;
	if(grade=='B'|| grade =='b')
	  basic=30000;
	 if(grade=='C'|| grade =='c')
	  basic=20000;
	if(years >=10)
	{
		bonus =basic *0.10;
    }  
	if(years < 5 && years <10 )
	{
		bonus =basic *0.05;
    }  
    if(years <5)
    {
    	bonus = 0;
	}
	//gross=
	gross=basic + bonus;
	
	//Tax
	if(gross>40000)
	tax=gross*0.20;
	
	if(gross>=30000&& gross<= 40000)
	tax=gross*0.10;
	
	if(gross<30000)
	tax=0;
	
	netsalary =gross-tax;
	cout<<"basic salary:\n"<<basic;
	cout<<"bonus:\n"<<bonus;
	cout<<"gross salary:\n"<<gross;
	cout<<"tax:\n"<<tax;
	cout<<"netsalary:\n"<<netsalary;
	return 0;
}
