#include<iostream>
using namespace std;
void Amount(double amo,string day)
{
if (day=="Sunday")
{
double disprice=0.9*amo;
cout<< "Payable Amount: $"<<disprice;
}else{
cout<< "Payable Amount: $"<<amo;
}
}
main()
{
string day;
cout<<"Enter the day of purchase: ";
cin>>day;
double amo;
cout << "Enter the total purchase amount: $";
cin>>amo;
Amount(amo,day);

}