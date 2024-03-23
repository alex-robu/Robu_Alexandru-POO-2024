#pragma once

#include "LoyaltyScheme.h"

using namespace System;

ref class CreditCardAccount
{
public:
	CreditCardAccount();
	CreditCardAccount(long number, double limit);

	static CreditCardAccount();
	
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();

	static int GetNumberOfAccounts();

	void RedeemLoyaltyPoints();

	literal String ^name = "Super Platinum Card";
private:
	static int numberOfAccounts = 0;
	static double interestRate;

	initonly long accountNumber;
	double currentBalance;
	double creditLimit;

	LoyaltyScheme^ scheme;				// Handle to a LoyaltyScheme object
};