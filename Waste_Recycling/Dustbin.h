#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Garbage.h"
#include "PlasticGarbage.h"
#include "PaperGarbage.h"
using namespace std;

class Dustbin
{protected:
	string color;
	vector <PaperGarbage> paperContent;
	vector <PlasticGarbage> plasticContent;
	vector <Garbage> houseWasteContent;

public:
	Dustbin(string = "black");

	void throwOutGarbage(Garbage Garbage);
	void throwOutPaperGarbage(PaperGarbage PaperGarbage);
	void throwOutPlasticGarbage(PlasticGarbage PlasticGarbage);

};

