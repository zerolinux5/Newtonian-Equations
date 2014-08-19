#include <iostream>
#include <math.h>

using namespace std;

double findDist(double velocity, double accel, double time)
{
	return (velocity * time  + 0.5 * accel * pow(time,2));
}

int main()
{
	int testInput1, testInput2, testInput3;
	cin >> testInput1 >> testInput2 >> testInput3;
	cout << findDist(testInput1, testInput2, testInput3) << endl;
	return 0;
}