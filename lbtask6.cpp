#include<iostream>
using namespace std;
void Grade(int marks)
{
if (marks>50)
{
cout <<"Pass";
}else{
cout <<"Fail";
}
}
main()
{
int marks;
cout << "Enter your score: ";
cin>>marks;
Grade(marks);
}

