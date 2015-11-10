#pragma once
#include "B.h"
class D1 :
	public B
{
public:
	D1();
	virtual ~D1();

	// overwrite
	// hard to understand for me
	// (1) - same name; different signature; => hide B::callMe();				// 
	// (2) - same signature, no virtual on B::callMe(); => hide B::callMe();	// ok
	// overwrite - no matter the B::callMe() is virtual or not, it will be hidden anyway
	void callMe0(){ cout << "here is D callMe0.\n"; }
	void callMe1() { cout << "here is D callMe1.\n"; }
	void callMe1(int i) { cout << "here is D callMe1 with peremeter " << i << endl; }

	// override
	void callMe2() { cout << "here is D callMe2.\n"; }

	// overwrite
	void callMe3() { cout << "here is D callMe3.\n"; }

	// overload
	void callMe4() { cout << "here is D callMe4.\n"; }
	void callMe4(int i) { cout << "here is D callMe4 with peremeter " << i << endl; }



};

