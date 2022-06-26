#pragma once
#include <iostream>
#include <string>

using namespace std;

class Garbage
{protected:
	string name;

public:
	Garbage(string="some trash");
	string getName();
};

