#include<iostream>
#include<stdio.h>
using namespace std;
class Base {
    public:
virtual void show(){cout<<"Base"<<end1;
};
};
class Derv1 : public Base {
public:
void show(){cout << "Deriv1"<<end1;
};};
class Derv2 : public Base {
public:
void show(){cout << "Deriv2"<<end1;
};};
int main(void){
Derv1 dv1;
Derv2 dv2;
Base* ptr;
ptr=&dv1;
ptr->show();
ptr=&dv2;
ptr->show();
getchar();
getchar();};
