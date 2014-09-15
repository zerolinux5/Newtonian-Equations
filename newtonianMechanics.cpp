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

template <class T>
T maxHeight(T initVel, T angle)
{
	T result;
	result = pow(initVel, 2) * pow(sin(angle), 2) / (2 * 9.8);
	return result;
}

template <class T>
T maxDist(T initVel)
{
	T result;
	result = pow(initVel, 2) / 9.8;
	return result;
}

template <class T>
T xLocation(T initVel, T time, T angle)
{
	T result;
	result = initVel * time * cos(angle);
	return result;
}

template <class T>
T yLocation(T initVel, T time, T angle)
{
	T result;
	result = (initVel * time * sin(angle)) - (0.5 * 9.8 * pow(time, 2));
	return result;
}

template <class T>
T timeToGround(T initVel, T angle)
{
	T result;
	result = 2 * initVel * sin(angle) / 9.8;
	return result;
}

template <class T>
T xVelocity(T initVel, T angle)
{
	T result;
	result = initVel * cos(angle);
	return result;
}

template <class T>
T yVelocity(T initVel, T time, T angle)
{
	T result;
	result = initVel * sin(angle) - (9.8 * time);
	return result;
}

template <class T>
T displacement(T initVel, T time, T angle){
	T x = xLocation(initVel, time, angle);
	T y = yLocation(initVel, time, angle);
	T result;
	result = sqrt(pow(x, 2) + pow(y, 2));
	return result;
}

template <class T>
T forceAccel(T mass, T accel){
	T force = mass * accel;
	return force;
}

template <class T>
T forceVel(T mass, T initVel, T finalVel, T times){
	T force = mass * ((finalVel - initVel)/times);
	return force;
}

int main()
{
	double initVel, accel, times, finalVel, angle, mass;
	cout << "Enter Initial Velocity, Acceleration, Time, Final Velocity, Angle, Mass" << endl;
	cin >> initVel >> accel >> times >> finalVel >> angle >> mass;
	double dist = findDistVAT(initVel, accel, times);
	cout << "Distance = " << dist << endl;
	cout << "Distance = " << findDistVVT(initVel, finalVel, times) << endl;
	cout << "Velocity = " << findVelVAD(initVel, accel, dist) << endl;
	cout << "Velocity = " << findVelVAT(initVel, accel, times) << endl;
	cout << "Max Height = " << maxHeight(initVel, angle) << endl;
	cout << "Max Distance = " << maxDist(initVel) << endl;
	cout << "Ground ETA = " << timeToGround(initVel, angle) << endl;
	cout << "X Location = " << xLocation(initVel, times, angle) << endl;
	cout << "Y Location = " << yLocation(initVel, times, angle) << endl;
	cout << "Displacement = " << displacement(initVel, times, angle) << endl;
	cout << "X Velocity = " << xVelocity(initVel, angle) << endl;
	cout << "Y Velocity = " << yVelocity(initVel, times, angle) << endl;
	cout <<  "Force using accel = " << forceAccel(mass, accel) << endl;
	cout <<  "Force using velocity = " << forceVel(mass, initVel, finalVel, times) << endl;
	return 0;
}