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

#include "Displays.hpp"
#include <iostream>

using namespace std;

void CurrentConditionsDisplay::update(float temp, float humidity, unsigned int pressure)
{
    this->temperature = temp;
    this->humidity = humidity;
    display();
};

void CurrentConditionsDisplay::display()
{
    cout << "Current conditions: " << temperature << "C degrees and " << humidity << "% humidity" << endl;
};

void StatisticsDisplay::update(float temp, float humidity, unsigned int pressure)
{
    float accul = avetemp * numtemp;
    if (numtemp == 0)
    {
        maxtemp = temp;
        mintemp = temp;
    }
    else
    {
        if (temp > maxtemp)
            maxtemp = temp;
        if (temp < mintemp)
            mintemp = temp;
    };

    if (numtemp == 100)
    {
        accul -= avetemp;
    }
    else
    {
        numtemp++;
    };
    accul += temp;
    avetemp = accul / (float)numtemp;
    display();
};

void StatisticsDisplay::display()
{
    cout << "Avg/Max/Min temperature = " << avetemp << "/" << maxtemp << "/" << mintemp << endl;
};

void ThirdPartyDisplay::update(float temp, float humidity, unsigned int pressure)
{
    heat_index = 16.923 + 1.85212 * 0.1 * temp + 5.37941 + humidity - 1.00254 * 0.1 * temp * humidity;
    heat_index += 9.41695 * 0.001 * temp * temp + 7.28898 * 0.001 * humidity * humidity;
    heat_index += 3.45372 * 0.0001 * temp * temp * humidity - 8.14971 * 0.0001 * temp * humidity * humidity;
    heat_index += 1.02102 * 0.00001 * temp * temp * humidity * humidity - 3.8646 * 0.00001 * temp * temp * temp;
    heat_index += 2.91583 * 0.00001 * humidity * humidity * humidity + 1.42721 * 0.000001 * temp * temp * temp * humidity;
    heat_index += 1.97483 * 0.0000001 * temp * humidity * humidity * humidity - 2.18429 * 0.00000001 * temp * temp * temp * humidity * humidity;
    heat_index += 8.43296 * 0.0000000001 * temp * temp * humidity * humidity * humidity - 4.81975 * 0.00000000001 * temp * temp * temp * humidity * humidity * humidity;
    display();
};

void ThirdPartyDisplay::display()
{
    cout << "Heat index is " << heat_index << endl;
};

void ForecastDisplay::update(float temp, float humidity, unsigned int pressure)
{
    int ranval = rand();
    float percentage = (float)ranval / (float)(RAND_MAX)-0.5;
    forecast = temp * (1.0 + percentage);
    display();
};

void ForecastDisplay::display()
{
    cout << "Forecast: " << forecast << "C degrees" << endl;
};