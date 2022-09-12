#include "PlasticGarbage.h"
#include "Garbage.h"
#include <iostream>
#include <string>
using namespace std;

PlasticGarbage::PlasticGarbage(string n, bool c) {
	name = n;
	isClean = c;
}

bool PlasticGarbage::clean()
{
	isClean = true;
	return isClean;
}

bool PlasticGarbage::getIsClean()
{
	return isClean;
}
