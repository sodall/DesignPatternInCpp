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

#include "Duck.hpp"

#include <iostream>

class MallardDuck : public Duck
{
public:
    MallardDuck() : Duck("flywithwings", "quack"){};
    void display()
    {
        std::cout << "I'm a real Mallard duck!" << std::endl;
    };
};

class RedheadDuck : public Duck
{
public:
    RedheadDuck() : Duck("flywithwings", "squeak"){};
    void display()
    {
        std::cout << "I'm a real RedHead duck!" << std::endl;
    };
};

class RubberDuck : public Duck
{
public:
    RubberDuck() : Duck("flynoway", "squeak"){};
    void display()
    {
        std::cout << "I'm a real Rubber duck!" << std::endl;
    };
};

class DecoyDuck : public Duck
{
public:
    DecoyDuck() : Duck("flynoway", "mutequack"){};
    void display()
    {
        std::cout << "I'm a real Decoy duck!" << std::endl;
    };
};