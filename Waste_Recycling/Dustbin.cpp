#include "Dustbin.h"
#include <iostream>
#include <string>

using namespace std;

Dustbin::Dustbin(string col) {
	color = col;
}
void Dustbin::throwOutGarbage(Garbage Garbage)
{
	houseWasteContent.push_back(Garbage);//powinno sie znalezc sprawdzenie
}

void Dustbin::throwOutPaperGarbage(PaperGarbage PaperGarbage)
{
	paperContent.push_back(PaperGarbage);
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage PlasticGarbage)
{
	Dustbin::plasticContent.push_back(PlasticGarbage);
}

