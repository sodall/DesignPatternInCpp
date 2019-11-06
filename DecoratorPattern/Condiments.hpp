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

#include "CondimentDecorator.hpp"

class Milk : public CondimentDecorator
{
public:
    Milk(Beverage *bev) : beverage(bev)
    {
        description = getDescription();
    };
    double cost();
    std::string getDescription();

private:
    Beverage *beverage;
};

class Mocha : public CondimentDecorator
{
public:
    Mocha(Beverage *bev) : beverage(bev)
    {
        description = getDescription();
    };
    double cost();
    std::string getDescription();

private:
    Beverage *beverage;
};

class Soy : public CondimentDecorator
{
public:
    Soy(Beverage *bev) : beverage(bev)
    {
        description = getDescription();
    };
    double cost();
    std::string getDescription();

private:
    Beverage *beverage;
};

class Whip : public CondimentDecorator
{
public:
    Whip(Beverage *bev) : beverage(bev)
    {
        description = getDescription();
    };
    double cost();
    std::string getDescription();

private:
    Beverage *beverage;
};
