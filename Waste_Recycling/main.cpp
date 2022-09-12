#include <iostream>
#include "Garbage.h"
#include <string>
#include "PaperGarbage.h"
#include "Dustbin.h"


void showGarbagecontents(vector <string> container) {
	for (int i = 0; i < container.size(); i++)
	{
		cout << container[i] << std::endl;
	}

}

int main() {

	Garbage t1("butelka");
	cout << t1.getName();
	cout << endl;
	PaperGarbage p1("belele", false);
	cout << p1.getName();
	cout << endl;

	Dustbin Container, paperContainer;

	Container.throwOutGarbage(t1);
	paperContainer.throwOutGarbage(p1);
	cout << "test";

	return 0;
}