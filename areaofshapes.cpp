//Write a program in c++ to calculate the area of circle square and rectangle 
#include<iostream>
using namespace std;
class area
{
	public:
	float radius;
	float length;
	float breadth;
	float areaofcircle()
	{
		return 3.14*radius*radius;
	} 
	float areaofsquare()
	{
		return length*length;
	}
	float areaofrectangle()
	{
		return length*breadth;
	}
};
int main()
{
	area shape;
	cout<<"Enter radius of circle : "<<endl;
	cin>>shape.radius;
	cout<<" The area of circle is "<<shape.areaofcircle()<<endl;
	
	cout<<"Enter length of square : "<<endl;
	cin>>shape.length;
	cout<<" The area of square is "<<shape.areaofsquare()<<endl;
	
	cout<<"Enter lenagth and breadth of rectangle : "<<endl;
	cin>>shape.length;
	cin>>shape.breadth;
	cout<< " The area of rectangle is "<<shape.areaofrectangle()<<endl;
	return 0;
}
