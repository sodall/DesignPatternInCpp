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
#include "WeatherData.hpp"

#include <iostream>

using namespace std;

int main()
{
    WeatherData *weatherData = new WeatherData();

    CurrentConditionsDisplay currentDisplay(dynamic_cast<Subject &>(*weatherData));
    StatisticsDisplay statisticDisplay(dynamic_cast<Subject &>(*weatherData));
    ThirdPartyDisplay thirdpartyDisplay(dynamic_cast<Subject &>(*weatherData));
    ForecastDisplay forecastDisplay(dynamic_cast<Subject &>(*weatherData));

    cout << "===== Update weather data!" << endl;

    weatherData->setMeasurements(80, 65, 1030);

    cout << "===== Update weather data!" << endl;

    weatherData->setMeasurements(82, 70, 1029);

    cout << "===== Update weather data!" << endl;

    weatherData->setMeasurements(78, 90, 1029);

    delete weatherData;

    cout << "===== Test Finished!" << endl;

    return 0;
};