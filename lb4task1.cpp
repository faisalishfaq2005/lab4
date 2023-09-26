#include<iostream>
using namespace std;
double amountfuel(double distance)
{
double fuel=distance*10;
return fuel;
}
main()
{
cout << "Enter the distance: ";
cin>>distance;
cout<< "Fuel needed: "<<amountfuel(distance);