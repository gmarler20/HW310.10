// HW 3 10.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

	class MyInteger {
public:
	

	MyInteger(int x)
	{
		x = value;
	}
	 int getint() const{ 

		return value;
	}

	 bool isEven () const{
		if (value % 2 == 0)
			return true;
		else;
	}

	 bool isOdd() const {
		if (value % 2 != 0)
			return true;
		else;
	}

	const bool isPrime() {
		if (value / value == 1 && value / 1 == value)
			return true;
		else;
	}

	static bool isEven(int x)
	{
		if (x % 2 == 0)
			return true;
		else;
	}

	static bool isOdd(int x)
	{
		if (x % 2 != 0)
			return true;
		else;
	}

	static bool isPrime(int x)
	{
		if (x / x == 1 && x / 1 == x)
			return true;
		else;
	}

	static bool isEven(const MyInteger &ob) 
	{
		if (ob.getint() % 2 == 0)
			return true;
		else;
	}

	 bool isOdd(const MyInteger &ob)
	{
		if (ob.getint() % 2 != 0)
			return true;
		else;
	}

	 bool isPrime(const MyInteger &ob)
	{
		if (ob.getint() / ob.getint() == 1 && ob.getint() / 1 == ob.getint())
			return true;
		else;
	}
	
	 bool equals(const MyInteger &ob)
	 {
		 if (ob.getint() == value) {
			 return true;
		 else
			 return false;
		 }

	
	 static int parseInt(const string &ob)
	 {
		 string1 = ob.getint();
		 int convert = string1;
		 return convert;
	 }
	

private: 
	int value;

};

int main()
{
	MyInteger(5);
	MyInteger ob;
	isEven();
	isOdd();
	isPrime();
	equals();
	ParseInt();

    return 0;
}

