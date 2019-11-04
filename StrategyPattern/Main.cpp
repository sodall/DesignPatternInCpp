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

#include "DuckInstances.hpp"

#include <iostream>

using namespace std;

int main() {
    cout << "===== Testing MallardDuck" << endl;

    Duck * duck = new MallardDuck();
    duck->display();
    duck->swim();
    duck->performQuack();
    duck->performFly();

    delete duck;

    cout << "===== Testing RedheadDuck" << endl;

    duck = new RedheadDuck();
    duck->display();
    duck->swim();
    duck->performQuack();
    duck->performFly();

    delete duck;

    cout << "===== Testing RubberDuck" << endl;

    duck = new RubberDuck();
    duck->display();
    duck->swim();
    duck->performQuack();
    duck->performFly();

    delete duck;

    cout << "===== Testing DecoyDuck" << endl;

    duck = new DecoyDuck();
    duck->display();
    duck->swim();
    duck->performQuack();
    duck->performFly();

    delete duck;

    cout << "===== Test Finished!" << endl;

    return 0;
};