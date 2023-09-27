#include<iostream>

using namespace std;

void inchesToFeet(double inches)

{

double conversion= inches/12;

cout << "Equivalent in feet: "<<conversion;

}

main()

{

double inches;

cout << "Enter the measurement in inches: ";

cin>>inches;

inchesToFeet(inches)
;
}
