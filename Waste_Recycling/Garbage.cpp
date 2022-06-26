#include <iostream>
#include <string>
#include "Garbage.h"

using namespace std;

Garbage::Garbage(string n) {
	name = n;
}

string Garbage::getName() {
	return name;
}