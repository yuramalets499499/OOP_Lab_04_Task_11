#include "WeatherPrediction.hpp"
#include "AirPrediction.hpp"
#include"Date.h"
#include"WeatherPrediction.hpp"
#include<stdio.h>
#include<stdlib.h>
#include<string>


WeatherPrediction::WeatherPrediction()
{
}

WeatherPrediction::WeatherPrediction(std::string place, int date)
{
    this->place = place;
    this->date = date;
}

WeatherPrediction::~WeatherPrediction()
{
}

void WeatherPrediction::SetPlace(char misto)
{
    char place = misto;
}

void WeatherPrediction::SetDate(int den)
{
    int date = den;
}

std::string WeatherPrediction::GetPlace(char misto)
{
    return place;
}

int WeatherPrediction::GetDate(int den)
{
    return date;
}
