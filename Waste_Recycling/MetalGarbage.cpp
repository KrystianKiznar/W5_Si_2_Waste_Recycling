#include "MetalGarbage.h"

bool MetalGarbage::isPinkCap()
{
    return color == "pink" || color == "Pink";
}

MetalGarbage::MetalGarbage(string color) {
    this->color = color;
}
