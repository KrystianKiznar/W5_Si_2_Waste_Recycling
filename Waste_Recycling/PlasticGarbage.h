#pragma once
#include <iostream>
#include <string>
#include "Garbage.h"

class PlasticGarbage :public Garbage
{
private:
	bool isClean;

public:
	PlasticGarbage(string = "some plastic trash", bool = false);
	bool clean();

	bool getIsClean();

};
