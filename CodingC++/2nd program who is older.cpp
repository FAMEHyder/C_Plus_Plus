#include <iostream>
using namespace std;
int main()
{
int First_person,second_person;

cout<<"Enter the age of First person = ";
cin>>First_person;

cout<<"Enter the age of second person = ";
cin>>second_person;

if (First_person>second_person)
cout<<endl<<endl<<"First person is older than second person"<<endl<<endl<<endl<<endl;
else
cout<<endl<<endl<<"second person is older than first person"<<endl<<endl<<endl<<endl;

return 0 ;
}