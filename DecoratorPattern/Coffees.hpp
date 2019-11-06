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

#include "Beverage.hpp"

class HouseBlend : public Beverage
{
public:
    HouseBlend()
    {
        description = "HouseBlend";
    }
    double cost();
};

class DarkRoast : public Beverage
{
public:
    DarkRoast()
    {
        description = "DarkRoast";
    }
    double cost();
};

class Espresso : public Beverage
{
public:
    Espresso()
    {
        description = "Espresso";
    }
    double cost();
};

class Decaf : public Beverage
{
public:
    Decaf()
    {
        description = "Decaf";
    }
    double cost();
};