#include<iostream>
using namespace std;
void Amount(double amo,string day)
{
if (day=="Sunday")
{
double disprice=0.9*amo;
cout<< "Payable Amount: $"<<disprice;
}else{
double dispriceother=0.95*amo;
cout<< "Payable Amount: $"<<dispriceother;
}
}
main()
{

bool cheak=false;
while (cheak==false){
cout << "Enter the total purchase amount: $";
cin>>amo;
string day;
cout<<"Enter the day of purchase: ";
cin>>day;
Amount(amo,day);
}

}