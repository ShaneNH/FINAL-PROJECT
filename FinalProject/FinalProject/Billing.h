#ifndef BILLING_H
#define BILLING_H

using namespace std;

class Billing{ //declare billing class
private:
	int BLeasenum;
	double BRentamt;
	char BBillcycle;
public:
	Billing();
	Billing(int bleasenum, double brentamt, char bbillcycle);
	int getbleasenum();
	double getbrentamt();
	char getbbillcycle();
	void setbleasenum(int num);
	void setbrentamt(double rent);
	void setbbillcycle(char cycle);
	void totalamt();

};


#endif