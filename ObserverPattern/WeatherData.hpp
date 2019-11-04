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

#include <vector>

class WeatherData : public Subject
{
public:
    WeatherData() : temperature(0.0), humidity(0.0), pressure(0) {

    };
    WeatherData(float t, float h, unsigned int p) : temperature(t), humidity(h), pressure(p) {
        
    };
    void registerObserver(Observer *o);
    void removeObserver(Observer *o);
    void notifyObservers();

    float getTemperature();
    float getHumidity();
    unsigned int getPressure();
    void measurementsChanged();

    void setMeasurements(float temperature, float humidity, unsigned int pressure);
private:
    float temperature;
    float humidity;
    unsigned int pressure;

    std::vector<Observer *> observers;
};