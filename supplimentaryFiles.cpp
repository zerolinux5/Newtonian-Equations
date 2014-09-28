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

class PointCharge: public Point {
	double charge;
   public:
	void setValues(double, double, double);
	double getCharge() { return charge;}
};

void PointCharge::setValues(double inCharge, double inX, double inY){
	charge = inCharge;
	x = inX;
	y = inY;
}

int main()
{
	Point p1;
	p1.setValues(2,3);
	cout << "Point 1: " << p1.getX() << "," << p1.getY() << endl;

	PointMass p2;
	p2.setValues(100,3,4);
	cout << "Point 2: " << p2.getX() << "," << p2.getY() << " mass:" << p2.getMass() << endl;

	PointCharge p3;
	p3.setValues(200,1,9);
	cout << "Point 3: " << p3.getX() << "," << p3.getY() << " charge:" << p3.getCharge() << endl;

	return 0;
}
