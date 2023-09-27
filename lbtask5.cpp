#include<iostream>
using namespace std;
void Vote(double age)
{
if (age>=18)
{
cout <<"You are eligible to vote.";
}else{
cout <<"You are not eligible to vote.";
}
}
main()
{
double age;
cout << "Enter your age: ";
cin>>age;
Vote(age);
}

