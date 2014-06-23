#include <iostream>
#include <string>
#include "Lease.h"

using namespace std;

//default constructor
Lease::Lease(){
	Leasenum = 0;
	Firstname = "";
	Lastname = "";
	Rentamt = 0.0;
	Billcycle = 'A';
}
//constructor
Lease::Lease(int leasenum, string firstname, string lastname, double rentamt, char billcycle){
	Leasenum = leasenum;
	Firstname = firstname;
	Lastname = lastname;
	Rentamt = rentamt;
	Billcycle = billcycle;
}
//get functions for private member objects
int Lease::getleasenum(){
	return Leasenum;
}
string Lease::getfirstname(){
	return Firstname;
}
string Lease::getlastname(){
	return Lastname;
}
double Lease::getrentamt(){
	return Rentamt;
}
char Lease::getbillcycle(){
	return Billcycle;
}
//set functions for private member objects
void Lease::setleasenum(int lease){
	Leasenum = lease;
}
void Lease::setfirstname(string first){
	Firstname = first;
}
void Lease::setlastname(string last){
	Lastname = last;
}
void Lease::setrentamt(double rent){
	Rentamt = rent;
}
void Lease::setbillcycle(char cycle){
	Billcycle = cycle;
}