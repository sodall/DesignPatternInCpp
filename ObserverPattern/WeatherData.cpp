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

#include "WeatherData.hpp"

void WeatherData::registerObserver(Observer *o)
{
    observers.push_back(o);
};

void WeatherData::removeObserver(Observer *o)
{
    int res = -1;
    for (int i = 0; i < observers.size(); i++)
    {
        if (observers[i] == o)
        {
            res = i;
            break;
        }
    }
    if (res >= 0)
    {
        observers.erase(observers.begin() + res);
    }
};

void WeatherData::notifyObservers()
{
    for (auto x : observers)
    {
        x->update(temperature, humidity, pressure);
    }
};

float WeatherData::getTemperature()
{
    return temperature;
};

float WeatherData::getHumidity()
{
    return humidity;
};

unsigned int WeatherData::getPressure()
{
    return pressure;
};

void WeatherData::measurementsChanged()
{
    notifyObservers();
};

void WeatherData::setMeasurements(float temperature, float humidity, unsigned int pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
};
