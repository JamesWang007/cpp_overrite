#include <iostream>
#include "D1.h"
using namespace std;


int main()
{
	B * pd = new D1();
	D1 d1;


	cout << "============ call me 0 series:\n";
	// call me 0
	pd->callMe0();		// B 0
	d1.callMe0();		// D 0
	

	cout << "============ call me 1 series:\n";
	// call me 1
	pd->callMe1();		// D 1
	//pd->callMe1(3);// error
	//d1.callMe1(); // 
	d1.callMe1(3000);		// D 1 - 3000


	cout << "============ call me 2 series:\n";
	// call me 2
	pd->callMe2();		// D 2
	d1.callMe2();		// D 2


	cout << "============ call me 3 series:\n";
	// cal me 3
	pd->callMe3();		// B 3
	d1.callMe3();		// D 3


	cout << "============ call me 4 series:\n";
	// call me 4
	d1.callMe4();		// D 4
	d1.callMe4(3000);	// D 4 - 3000


	return 0;
}