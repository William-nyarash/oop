#include<iostream>
using namespace std;


class student  {
 private: int roll;

 char name[30];

public :

void get_data() {
 cout<<"Enter  roll number and name";cin>>roll>>name;
}
void put_data () {

cout<<"Roll number:"<<roll<<endl;
cout<<"name : "<<name<<endl;
}
};
int main() {
student s;
int count = 2;
do {
 cout<<"waren is on the road to freedom"<<endl;
 count  ++;
} while(count < 12);

cout<<"waren Is a programmer" << endl;
s.get_data();

s.put_data();
return 0;
}
