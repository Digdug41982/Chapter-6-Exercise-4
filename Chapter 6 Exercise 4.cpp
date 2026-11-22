// Chapter 6 Exercise 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void kineticEnergy(double m, double v)
{
	double KE = 0.5 * m * v * v;
	cout << "The kinetic energy is: " << KE << " Joules\n";
}
int main()
{
	double m=0;
	double v=0;
	cout << "Enter the mass of the object in kilograms: ";
	cin >> m;
	cout << "Enter the velocity of the object in meters per second: ";
	cin >> v;
	kineticEnergy(m, v);
	

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
