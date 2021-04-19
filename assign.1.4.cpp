#include<iostream>
using namespace std;
int main()
{   
   char father[20];
   char mother[20];
   char name[20];
   char sister[20];
   char brother[20];

  cout<<"\n enter first name of your father : ";
  cin>>father;

  cout<<"\n enter first name of your mother : ";
  cin>>mother;

  cout<<"\n enter first name of your sister : ";
  cin>>sister;

  cout<<"\n enter first name of your brother: ";
  cin>>brother;

  cout<<"\n enter your first name : ";
  cin>>name;

  cout<<"\n ### your family ####";


  cout<<"\n parents \t-->"<<father<<" + "<<mother;

  cout<<"\n siblings \t-->"<<sister<<" + "<<brother;

  cout<<"\n me \t\t-->"<<name;

  return 0;

}
