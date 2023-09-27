#include<iostream>
using namespace std;
void function(string name)
{
cout<< name;
}
main()
{
string name;
cout<< "enter name";
cin>>name;
bool cheak=false;
while (cheak==false){
function(name);
}
}