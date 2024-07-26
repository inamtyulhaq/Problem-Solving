// https://edabit.com/challenge/jDevoXyp5JmiMXacL

// create a class as per said
// do create parameterized constructor as its written that we need to pass an argument
// to the circle object when created
// take r as float
// make getters as per said

#include <iostream>
#include <cmath>
class Circle
{
	public:
	Circle(float r)
	{
		this->r=r;
	}
	float getArea()
	{
		return 3.14*pow(r,2);
	}
	float getPerimeter()
	{
		return 3.14*r*2;
	}
	private:
		float r;
};
