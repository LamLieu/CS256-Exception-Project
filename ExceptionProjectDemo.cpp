// inclass3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	int employeeNumber;
public:
	Employee() {};
	void setEmployeeNumber(int employeeNumber) {
		if (employeeNumber < 0 || employeeNumber > 9999) {
			string invalidEmployeeNumber = "Invalid employee number!";
			throw invalidEmployeeNumber;
		}
		this->employeeNumber = employeeNumber;
		cout << "You've successfully set the employee number to: " << employeeNumber << endl;
	}
};

class ProductionWorker {
private:
	int shift;
	double payRate;
public:
	ProductionWorker() {};

	void setShift(int shift) {
		if (shift < 0) {
			string InvalidShift = "Invalid shift!";
			throw InvalidShift;
		}
		this->shift = shift;
		cout << "You've successfully set the shift to: " << shift << endl;
	}

	void setPayRate(double payRate) {
		if (payRate < 0) {
			string invalidPayRate = "Invalid pay rate!";
			throw invalidPayRate;
		}
		this->payRate = payRate;
		cout << "You've successfully set the pay rate to: " << payRate << endl;
	}
};

int main() {
	Employee employee;
	ProductionWorker productionWorker;

	try {
		int employeeNumber;
		cout << "Please enter your employee number." << endl << "-->";
		cin >> employeeNumber;
		employee.setEmployeeNumber(employeeNumber);
	}
	catch (string invalidEmployeeNumber) {
		cout << invalidEmployeeNumber << endl;;
	}

	try {
		int shift;
		cout << "Please enter the number of hours for the production worker's shift." << endl << "-->";
		cin >> shift;
		productionWorker.setShift(shift);
	}
	catch(string InvalidShift) {
		cout << InvalidShift << endl;
	}

	try {
		int payRate;
		cout << "Please enter the pay rate of the production worker." << endl << "-->";
		cin >> payRate;
		productionWorker.setPayRate(payRate);
	}
	catch (string invalidPayRate) {
		cout << invalidPayRate << endl;
	}
    return 0;
}

