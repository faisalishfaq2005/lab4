#include<iostream>
using namespace std;
double inchesToFeet(double inches)
{
conversion= inches/12;
return conversion;
}
main()
{
cout << "Enter the measurement in inches: ";
cin>>inches;
cout<< "Equivalent in feet: "<<inchesToFeet(inches);