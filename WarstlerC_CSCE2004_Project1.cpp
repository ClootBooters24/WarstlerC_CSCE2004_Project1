// WarstlerC_CSCE2004_Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
//Include cmath to allow me to use pow function
#include <cmath>
using namespace std;

int main()
{
	double radiusOne;
	double radiusHandle;
	double lengthHandle;
	//Constants for the density of different materials
	//Could not use M_PI so I did the math for pi instead
	const double Pi = atan(1.0) * 4;
	const double aluminum = 2.7;
	const double iron = 7.874;
	const double lead = 11.34;
	const double titanium = 4.5;

	//Gather the radius and length of the dumbell handle and sphere
	cout << "Please enter the radius of the spheres in centimeters: ";
	cin >> radiusOne;
	cout << "Please enter the radius of the handle in centimeters: ";
	cin >> radiusHandle;
	cout << "Please enter the length of the handle in centimeters: ";
	cin >> lengthHandle;

	//Calculating the volumes
	double volumeSphere = (4 * Pi * pow(radiusOne, 3)) / 3;
	double volumeHandle = Pi * lengthHandle * pow(radiusHandle, 2);
	double volumeTotal = volumeHandle + (2 * volumeSphere);
	
	//Outputting the volumes and densities
	cout << "The volume of each sphere were: " << volumeSphere << "cm^3" << endl;
	cout << "The volume of the handle was: " << volumeHandle << "cm^3" << endl;
	cout << "The volume of the dumbell in total was: " << volumeTotal << "cm^3" << endl;
	cout << "The mass of the dumbell if it is made out of aluminum is: " << volumeTotal * aluminum << "g/cm^3" << endl;
	cout << "The mass of the dumbell if it is made out of iron is: " << volumeTotal * iron << "g/cm^3" << endl;
	cout << "The mass of the dumbell if it is made out of lead is: " << volumeTotal * lead << "g/cm^3" << endl;
	cout << "The mass of the dumbell if it is made out of titanium is: " << volumeTotal * titanium << "g/cm^3" << endl;

	return 0;
}
