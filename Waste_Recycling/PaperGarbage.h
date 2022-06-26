#pragma once
#include <iostream>
#include <string>
#include "Garbage.h"

using namespace std;

class PaperGarbage:public Garbage
{private:
	bool isSqueezed;

public:
	PaperGarbage(string = "some paper trash", bool=false);
	bool squeeze();
};

