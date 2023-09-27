#include<iostream>
using namespace std;
void howManyStickers(int n)
{
int sides=(n*n)*6;
cout << "Number of stickers needed: "<<sides;
}
main()
{
int n;
cout << "Enter the side length of the Rubik's Cube: ";
cin>>n;
howManyStickers(n);
}

