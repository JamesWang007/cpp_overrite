#pragma once
#include <iostream>
using namespace std;

class B
{
public:
	B();
	virtual ~B();

	void callMe0(){ cout << "here is B callMe0;\n"; }

	virtual void callMe1() { cout << "here is B callMe1.\n"; }

	virtual void callMe2() { cout << "here is B callMe2.\n"; }

	void callMe3() { cout << "here is B callMe3.\n"; }

};

