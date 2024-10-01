#pragma once
#include "uchastnik.h"
#include <iostream>
#include <string>
using namespace std;

class Prepatstvie
{
public:
    virtual bool vozmoznost_preodalet_prepadstvie(Uchastnik& uchastnik) = 0;
    virtual ~Prepatstvie() = default;
};
class Running: public Prepatstvie
{
    int length;
public:
    Running(int length) : length(length) {}
    bool vozmoznost_preodalet_prepadstvie(Uchastnik& uchastnik) override
    {
        return uchastnik.run(length);
    }
};
class Wall : public Prepatstvie
{
    int height;
public:
    Wall(int height) : height(height) {}
    bool vozmoznost_preodalet_prepadstvie(Uchastnik& uchastnik) override
    {
        return uchastnik.jump(height);
    }
};

