/* create a class with name bank with two member function saving accounts and checking accounts with two different interest rate 
show balance in both the account of the customer if the interest rate is given as argument to the fumction*/
#include<iostream>
using namespace std;
class bank
{
	public:
		double bal=50000,r,r1;
		double savingaccount( double sr)
		{
			r=sr;
			bal=bal+(bal*r);
			return bal;
			
		}	
		double checkingaccount(double cr)
		{
			r=cr;
			bal=bal+(bal*r);
			return bal;
		}
};  
int main()
{
	bank b1;
	cout<<"total amount for saving accounts is "<<b1.savingaccount(0.02)<<endl;
	cout<<"total amount for checking account is "<<b1.checkingaccount(0.04);
    return 0;
}
