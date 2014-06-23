#include <iostream>
#include "Billing.h"

using namespace std;

//default constructor
Billing::Billing(){
	BLeasenum = 0;
	BRentamt = 0.0;
	BBillcycle = 'A';
}
//constructor 
Billing::Billing(int bleasenum, double brentamt, char bbillcycle){
	BLeasenum = bleasenum;
	BRentamt = brentamt;
	BBillcycle = bbillcycle;
}
//get functions for private member objects
int Billing::getbleasenum(){
	return BLeasenum;
}
double Billing::getbrentamt(){
	return BRentamt;
}
char Billing::getbbillcycle(){
	return BBillcycle;
}
//set functions for private member objects
void Billing::setbleasenum(int num){
	BLeasenum = num;
}
void Billing::setbrentamt(double rent){
	BRentamt = rent;
}
void Billing::setbbillcycle(char cycle){
	BBillcycle = cycle;
}
void totalamt(){
	
}