#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Billing.h"
#include "Lease.h"

using namespace std;

void compare(Billing bil, Lease lea);

int main(){
	//initialize billing vector
	vector<Billing> billing(100);

	ifstream bil; 
	int i = 0;
	int count = 0;
	bil.open("C:\\Users\\Shane\\Desktop\\Billing_Errors.txt"); //open billing.txt file
	//enter info from billing.txt file into the billing vector
	while (!bil.eof()){
		int x;
		double y;
		char z;
		bil >> x >> y >> z;
			billing[i].setbleasenum(x); 
			billing[i].setbrentamt(y);
			billing[i].setbbillcycle(z);
		i++;
		count++;
	}
	//close the file
	bil.close();

	//intialize lease vector
	vector<Lease> lease(100);

	ifstream lea;
	i = 0;
	count = 0;
	lea.open("C:\\Users\\Shane\\Desktop\\Leases.txt"); //open leases.txt file
	//enter info from leases.txt into lease vector
	while (!lea.eof()){
		int v;
		string w, x;
		double y;
		char z;
		lea >> v >> w >> x >> y >> z;
		lease[i].setleasenum(v);
		lease[i].setfirstname(w);
		lease[i].setlastname(x);
		lease[i].setrentamt(y);
		lease[i].setbillcycle(z);
		i++;
		count++;
	}
	//close file
	lea.close();

	i = 0;
	//compare the two vectors
	while (i < count){
		compare(billing[i], lease[i]);
		i++;
	}

}
//function that compares both vectors
void compare(Billing bil, Lease lea){
	if (bil.getbleasenum() == lea.getleasenum()){
		//cout error if billing cycle does not match
		if (bil.getbbillcycle() != lea.getbillcycle()){
			cout << "Billing cycle does not match lease #" << lea.getleasenum() << " " << lea.getfirstname()
				<< " " << lea.getlastname() << endl;
		}
		//cout error if rent does not match
		if (bil.getbrentamt() != lea.getrentamt()){
			cout << "Rent amount does not match lease #" << lea.getleasenum() << " " << lea.getfirstname()
				<< " " << lea.getlastname() << endl;
		}

	}
	//cout error if lease numbers do not match
	else
		cout << "Lease numbers do not match " << "Billing.txt lease #" << bil.getbleasenum() << " Lease.txt Lease #" << lea.getleasenum() <<  endl;

}