/*
* Design Pattern In Cpp
*
* This product includes software developed by the
* DesignPatternInCpp Project (https://github.com/sodall/DesignPatternInCpp).
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* If you have any comments or questions, feel free to contact me:
* donny.st@gmail.com
*
*/

#include "Duck.hpp"
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

#include <iostream>

using namespace std;

void Duck::swim()
{
    cout << "I am swimming!!" << endl;
};

void Duck::performQuack()
{
    if (quackBehavior == nullptr)
        return;
    quackBehavior->quack();
};

void Duck::performFly()
{
    if (flyBehavior == nullptr)
        return;
    flyBehavior->fly();
};

void Duck::setFlyBehavior(const string &behavior)
{
    delete flyBehavior;
    if (behavior.compare("flywithwings") == 0)
    {
        flyBehavior = new FlyWithWings();
    }
    else if (behavior.compare("flynoway") == 0)
    {
        flyBehavior = new FlyNoWay();
    }
};

void Duck::setQuackBehavior(const string &behavior)
{
    delete quackBehavior;
    if (behavior.compare("quack") == 0)
    {
        quackBehavior = new Quack();
    }
    else if (behavior.compare("squeak") == 0)
    {
        quackBehavior = new Squeak();
    }
    else if (behavior.compare("mutequack") == 0)
    {
        quackBehavior = new MuteQuack();
    }
};
