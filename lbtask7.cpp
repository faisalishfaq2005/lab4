#include<iostream>
using namespace std;
void evenOrOdd(int num)
{
if ((num%2)==0)
{
cout <<"Number "<<num<< " is even";
}else{
cout <<"Number "<<num<< " is odd";
}
}
main()
{
int num;
cout << "Enter a number: ";
cin>>num;
evenOrOdd(num);

}

