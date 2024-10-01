#pragma once
#include <iostream>
#include <string>
using namespace std;

class Uchastnik
{
protected:
    string name;
    int max_run;
    int max_jump;

public:
    Uchastnik(const string& name, int run_distance, int jump_height)
        : name(name), max_run(run_distance), max_jump(jump_height) {}
    virtual bool run(int distance)
    {
        if (distance <= max_run)
        {
            cout << "Участник " << name << " пробежал дистанцию " << distance << " метров"<<endl;
            return true;
        }
        else
        {
            cout << "Участник " << name << " не пробежал дистанцию " << distance << " метров"<<endl;
            return false;
        }
    }

    virtual bool jump(int height)
    {
        if (height <= max_jump)
        {
            cout << "Участник " << name << " перепрыгнул препядствие " << height << " метров"<<endl;
            return true;
        }
        else
        {
            cout << "Участник " << name << " не перепрыгнул препядствие " << height << " метров"<<endl;
            return false;
        }
    }
    string getName() const
    {
        return name;
    }
    virtual ~Uchastnik() = default;
};
class Human : public Uchastnik
{
public:
    Human(const string& name, int run_distance, int jump_height)
        : Uchastnik(name, run_distance, jump_height) {}
};
class Cat : public Uchastnik
{
public:
    Cat(const string& name, int run_distance, int jump_height)
        : Uchastnik(name, run_distance, jump_height) {}
};
class Robot : public Uchastnik
{
public:
    Robot(const string& name, int run_distance, int jump_height)
        : Uchastnik(name, run_distance, jump_height) {}
};


