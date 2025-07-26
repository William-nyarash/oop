#include<iostream>

using namespace std;

// now give the class  a name

class /* write here */  { 

public: int  age;

char name[34];

public:
//  below  is a function  name
void get_data() {

cout<<"Enter your name and age "; cin>> name>>age>>endl;
}

// now in order to access the  output we need to define a  function 
// nb do not change the below code
void  display() {
 cout<<"Hello , "<<name<<endl;
cout<<name<<"You are "<<age<<"is'nt that wonderful"<<endl;

}
}

int main() {

// we use the class by calling it as specified below
// remeber to replace the comment with the name you gave your class


/*the name you gave your class goes here*/.person;

person.get_data();

person.display();

return 0;
}
