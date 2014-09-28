#include <iostream>
using namespace std;

class Point {
   protected:
	double x, y;
   public:
	void setValues(double,double);
	double getX() {return x;};
	double getY() {return y;};
};	

void Point::setValues (double inX, double inY) {
	x = inX;
	y = inY;
}

class PointMass: public Point {
	double mass;
   public:
	void setValues(double, double, double);
	double getMass(){ return mass;}
};

void PointMass::setValues(double inMass, double inX, double inY){
	mass = inMass;
	x = inX;
	y = inY;
}

/* this can be an inherited class from point and make another for electric points
class PointMass {
	double mass;
	Point position;
   public:
	void set_values(double, Point);
	void set_values(double, double, double);
	double get_mass() { return mass;};
};

void PointMass::set_values (double inMass, Point inPosition){
	mass = inMass;
	position.set_values(inPosition.get_x(), inPosition.get_y());
}

void PointMass::set_values (double inMass, double inX, double inY){
	mass = inMass;
	position.set_values(inX, inY);
}
*/

int main()
{
	Point p1;
	p1.setValues(2,3);
	cout << "Point 1: " << p1.getX() << "," << p1.getY() << endl;

	PointMass p2;
	p2.setValues(100,3,4);
	cout << "Point 2: " << p2.getX() << "," << p2.getY() << " mass:" << p2.getMass() << endl;
	return 0;
}
