#include<iostream>
using namespace std;
class circle
{
	public:
		double radius;
         
    public:
		double computearea()
		{
			return 3.14*radius*radius;	
	    }     
};
int main()
{
	circle ob;
	ob.radius=1.5;
	cout<<"Area is "<<ob.computearea();
	return 0;
}
