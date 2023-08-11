#include<iostream>
using namespace std;
class room
{
	public:
	double length;
	double	breadth;
	double height;
	double calculatearea()
	{
		return length*breadth;
	}
	double calculatevolume()
	{
		return length*breadth*height;
	}
};
int main()
{
	room r1;
	r1.length=49.6;
	r1.breadth=54.0;
	r1.height=65.8;
	
	cout<<" The Area of room1 is "<<r1.calculatearea()<<endl;
	cout<<" The Volume of romm1 is "<<r1.calculatevolume()<<endl;
	return 0;
}

