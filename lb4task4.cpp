#include<iostream>
using namespace std;
void Addition(int firstnum,int secnum);

void Subtraction(int firstnum,int secnum);

void Multiplication(int firstnum,int secnum);

void Division(int firstnum,int secnum);

main()
{
int firstnum;
cout << "Enter 1st number: ";
cin>>firstnum;
int secnum;
cout << "Enter 2nd number: ";
cin>>secnum;
char ope;
cout << "Enter an operator (+, -, *, /): ";
cin>>ope;
if (ope=='+')
{Addition(firstnum,secnum);
}
if (ope=='-')
{Subtraction(firstnum,secnum);
}
if (ope=='*')
{Multiplication(firstnum,secnum);
}
if (ope=='/')
{Division(firstnum,secnum);
}

}
void Addition(int firstnum,int secnum)
{
int sum=firstnum+secnum;
cout << "Addition: "<<sum;
}
void Subtraction(int firstnum,int secnum)
{
int minus=firstnum-secnum;
cout << "Subtraction: "<<minus;
}
void Multiplication(int firstnum,int secnum)
{
int mul=firstnum*secnum;
cout << "Multiplication: "<<mul;
}
void Division(int firstnum,int secnum)
{
double div=firstnum/secnum;
cout << "Division: "<<div;
}