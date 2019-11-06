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

#include "Coffees.hpp"
#include "Condiments.hpp"

#include <iostream>

using namespace std;

int main()
{
    cout << "===== Order Espresso!" << endl;

    Beverage *beverage = new Espresso();

    cout << beverage->getDescription() << " $" << beverage->cost() << endl;

    cout << "===== Order DarkRoast!" << endl;
    Beverage *beverage2 = new DarkRoast();
    beverage2 = new Mocha(beverage2);
    beverage2 = new Mocha(beverage2);
    beverage2 = new Whip(beverage2);
    cout << beverage2->getDescription() << " $" << beverage2->cost() << endl;

    cout << "===== Order HouseBlend!" << endl;
    Beverage *beverage3 = new HouseBlend();
    beverage3 = new Soy(beverage3);
    beverage3 = new Mocha(beverage3);
    beverage3 = new Whip(beverage3);
    cout << beverage3->getDescription() << " $" << beverage3->cost() << endl;

    delete beverage;
    delete beverage2;
    delete beverage3;

    cout << "===== Test Finished!" << endl;

    return 0;
}