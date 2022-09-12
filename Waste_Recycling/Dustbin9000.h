#pragma once
#include "Dustbin.h"
#include "MetalGarbage.h"
class Dustbin9000 :
    public Dustbin
{
private:
    vector <MetalGarbage> metalContent;
public:
    void throwOutMetalGarbage(MetalGarbage metalGarbage);
    Dustbin9000();
};

