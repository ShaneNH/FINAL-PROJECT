#ifndef LEASE_H
#define LEASE_H

using namespace std;

class Lease{ //declare lease class
private:
	int Leasenum;
	string Firstname;
	string Lastname;
	double Rentamt;
	char Billcycle;
public:
	Lease();
	Lease(int leasenum, string firstname, string lastname, double rentamt, char billcycle);
	int getleasenum();
	string getfirstname();
	string getlastname();
	double getrentamt();
	char getbillcycle();
	void setleasenum(int lease);
	void setfirstname(string first);
	void setlastname(string last);
	void setrentamt(double rent);
	void setbillcycle(char cycle);
};


#endif