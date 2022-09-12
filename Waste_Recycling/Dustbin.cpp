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
	if (PaperGarbage.getIsSqueezed() == false)
		cout << "DustbinContentError";
	else
		paperContent.push_back(PaperGarbage);
}

void Dustbin::throwOutPlasticGarbage(PlasticGarbage PlasticGarbage)
{
	if (PlasticGarbage.getIsClean() == false) {
		cout << "DustbinContentError";
	}
	else
		plasticContent.push_back(PlasticGarbage);
}

void Dustbin::emptyContents() {
	paperContent.clear();
	plasticContent.clear();
	houseWasteContent.clear();
}
