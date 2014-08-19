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

template <class T>
T findDistVVT(T initVel, T finalVel, T time)
{
	T result;
	result = (initVel + finalVel) / 2 * time;
	return result;
}

template <class T>
T findVelVAD(T initVel, T accel, T dist)
{
	T result;
	result = sqrt(pow(initVel,2) + 2 * accel * dist);
	return result;
}

template <class T>
T findVelVAT(T initVel, T accel, T time)
{
	T result;
	result = initVel + accel * time;
	return result;
}

double maxHeight(double initVel, double angle)
{
	double result;
	result = pow(initVel, 2) * pow(sin(angle), 2) / (2 * 9.8);
	return result;
}

double maxDist(double initVel)
{
	double result;
	result = pow(initVel, 2) / 9.8;
	return result;
}

double xLocation(double initVel, double time, double angle)
{
	double result;
	result = initVel * time * cos(angle);
	return result;
}

double yLocation(double initVel, double time, double angle)
{
	double result;
	result = (initVel * time * sin(angle)) - (0.5 * 9.8 * pow(time, 2));
	return result;
}

int main()
{
	double initVel, accel, times, finalVel, angle;
	cin >> initVel >> accel >> times >> finalVel >> angle;
	double dist = findDistVAT(initVel, accel, times);
	cout << "Distance = " << dist << endl;
	cout << "Distance = " << findDistVVT(initVel, finalVel, times) << endl;
	cout << "Velocity = " << findVelVAD(initVel, accel, dist) << endl;
	cout << "Velocity = " << findVelVAT(initVel, accel, times) << endl;
	cout << "Max Height = " << maxHeight(initVel, angle) << endl;
	cout << "Max Distance = " << maxDist(initVel) << endl;
	cout << "X Location = " << xLocation(initVel, times, angle) << endl;
	cout << "Y Location = " << yLocation(initVel, times, angle) << endl;
	return 0;
}