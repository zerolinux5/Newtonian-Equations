#include <iostream>
#include <math.h>

using namespace std;

double findDistVAT(double initVel, double accel, double time)
{
	return (initVel * time  + 0.5 * accel * pow(time,2));
}

double findDistVVT(double initVel, double finalVel, double time)
{
	return ((initVel + finalVel) / 2 * time);
}

int main()
{
	int initVel, accel, times, finalVel;
	cin >> initVel >> accel >> times >> finalVel;
	cout << findDistVAT(initVel, accel, times) << endl;
	cout << findDistVVT(initVel, finalVel, times) << endl;
	return 0;
}