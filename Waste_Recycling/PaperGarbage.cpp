#include "PaperGarbage.h"
#include "Garbage.h"
#include <iostream>
#include <string>

using namespace std;

PaperGarbage::PaperGarbage(string n, bool s) {
	name = n;
	isSqueezed = s;
}

bool PaperGarbage::squeeze()
{	
	isSqueezed = true;
	return isSqueezed;
}

bool PaperGarbage::getIsSqueezed() {
	return isSqueezed;
}
