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

#pragma once

#include <string>

class FlyBehavior;
class QuackBehavior;

class Duck
{
public:
    Duck() : flyBehavior(nullptr), quackBehavior(nullptr){};
    Duck(const std::string &flybehavior) : quackBehavior(nullptr)
    {
        setFlyBehavior(flybehavior);
    };
    Duck(const std::string &flybehavior, const std::string &quackbehavior)
    {
        setFlyBehavior(flybehavior);
        setQuackBehavior(quackbehavior);
    };

    void swim();
    void performQuack();
    void performFly();
    void setFlyBehavior(const std::string &behavior);
    void setQuackBehavior(const std::string &behavior);

    virtual void display() = 0;

protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;
};