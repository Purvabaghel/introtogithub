/* write a program to print the name , salary and date of join of 10 employees of a company . use array of objects*/
#include<iostream>
using namespace std;
class employee
{
	public:
		int doj[50];
		char name[50];
		float salary;
};
int main()
{
	employee e[10];
	for(int i=1;i<=10;i++)
	{
		cout<<"Enter date of joining of employee "<<i<<":";
		cin>>e[i].doj[50];
		cout<<"Enter name of employee "<<i<<":";
		cin>>e[i].name[50];
		cout<<"Enter salary of employee "<<i<<":";
		cin>>e[i].salary;
    }
    {
    	for(int i=1;i)
	}
	return 0;
}
