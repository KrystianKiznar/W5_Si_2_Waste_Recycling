#include "Dustbin9000.h"

void Dustbin9000::throwOutMetalGarbage(MetalGarbage metalGarbage) {
	if (metalGarbage.isPinkCap() == true)
		metalContent.push_back(metalGarbage);
	else
		cout << "BottleCapException";
}

Dustbin9000::Dustbin9000()
{
}
