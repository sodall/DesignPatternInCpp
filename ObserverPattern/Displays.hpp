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

#include "Subject.hpp"
#include "DisplayElement.hpp"


class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
    CurrentConditionsDisplay(Subject &sub) : weatherdata(sub), temperature(0.0), humidity(0.0)
    {
        weatherdata.registerObserver(this);
    };
    void update(float temp, float humidity, unsigned int pressure);
    void display();

private:
    Subject &weatherdata;
    float temperature;
    float humidity;
};

class StatisticsDisplay : public Observer, public DisplayElement
{
public:
    StatisticsDisplay(Subject &sub) : weatherdata(sub), avetemp(0.0), maxtemp(0.0), mintemp(0.0), numtemp(0) {
        weatherdata.registerObserver(this);
    };
    void update(float temp, float humidity, unsigned int pressure);
    void display();

private:
    Subject &weatherdata;
    float avetemp;
    float maxtemp;
    float mintemp;
    int numtemp;
    const int window = 100;
};

class ThirdPartyDisplay : public Observer, public DisplayElement
{
public:
    ThirdPartyDisplay(Subject &sub) : weatherdata(sub), heat_index(0.0){
        weatherdata.registerObserver(this);
    };
    void update(float temp, float humidity, unsigned int pressure);
    void display();
private:
    Subject &weatherdata;
    float heat_index;
};

#include <random>
#include <ctime>

class ForecastDisplay : public Observer, public DisplayElement
{
public:
    ForecastDisplay(Subject &sub) : weatherdata(sub), forecast(0.0){
        weatherdata.registerObserver(this);
        std::srand(std::time(nullptr)); // initialize the seed
    };
    void update(float temp, float humidity, unsigned int pressure);
    void display();
private:
    Subject &weatherdata;
    float forecast;
};