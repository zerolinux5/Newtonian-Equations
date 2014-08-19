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

int main()
{
	double initVel, accel, times, finalVel;
	cin >> initVel >> accel >> times >> finalVel;
	double dist = findDistVAT(initVel, accel, times);
	cout << "Distance = " << dist << endl;
	cout << "Distance = " << findDistVVT(initVel, finalVel, times) << endl;
	cout << "Velocity = " << findVelVAD(initVel, accel, dist) << endl;
	cout << "Velocity = " << findVelVAT(initVel, accel, times) << endl;
	return 0;
}