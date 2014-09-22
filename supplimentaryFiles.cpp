class Point {
	double x, y;
   public:
	void set_values(double,double);
	double get_x() {return x;};
	double get_y() {return y;};
};	

void Point::set_values (double inX, double inY) {
	x = inX;
	y = inY;
}

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
