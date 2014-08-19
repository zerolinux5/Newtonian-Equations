#include <iostream>
#include <math.h>

using namespace std;
template <class T>

T findDistVAT(T initVel, T accel, T time)
{
	T result;
	result = initVel * time  + 0.5 * accel * pow(time,2);
	return result;
}

double findDistVVT(double initVel, double finalVel, double time)
{
	return ((initVel + finalVel) / 2 * time);
}

double findVelVAD(double initVel, double accel, double dist)
{
	return (sqrt(pow(initVel,2) + 2 * accel * dist));
}

double findVelVAT(double initVel, double accel, double time)
{
	return (initVel + accel * time);
}

int main()
{
	int initVel, accel, times, finalVel;
	cin >> initVel >> accel >> times >> finalVel;
	double dist = findDistVAT(initVel, accel, times);
	cout << "Distance = " << dist << endl;
	cout << "Distance = " << findDistVVT(initVel, finalVel, times) << endl;
	cout << "Velocity = " << findVelVAD(initVel, accel, dist) << endl;
	cout << "Velocity = " << findVelVAT(initVel, accel, times) << endl;
	return 0;
}