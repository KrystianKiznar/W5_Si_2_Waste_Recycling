#pragma once
#include "Garbage.h"
class MetalGarbage :
    public Garbage
{
private:
    string color;
public:
    bool isPinkCap();
    MetalGarbage(string color);
};

