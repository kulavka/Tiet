
#ifndef BANKUTILS_HPP
#define BANKUTILS_HPP

#include "bankUtils.hpp"
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;




class BankUtils {

public:
	 double interestRate;
	BankUtils() {
		// predefined interest rate
		//interestRate = 10.0;
	}

	double ReadFromFile()	{
		fstream myFile;
		myFile.open("rate.txt", ios::in);
		if (myFile.is_open()) {
			string line;
			while (getline(myFile, line)) {
				return interestRate = 1/(atof(line.c_str()));
			}
			myFile.close();
		}
	}

	// Method takes full amount and returns the value after the decimal point (cents)
	int getCents(double amount) {
		
int amountC = fmod(amount * 100, 100);
		return amountC;
		
		
		
	}

	// Method takes full amount and returns the value before the decimal point (euros)
	int getEuros(double amount) {
		int amountE = trunc(amount);
		return amountE;
	}

	// Method takes credit amount and credit period in months, applies the predefined interestRate
	// and produces the total amount: creditAmount + interestRate over given months
	double calculateInterestRate(double creditAmount, unsigned int months) {
	}
};
#endif // !BANKUTILS_HPP
#pragma once
