#include "AirPrediction.hpp"
#include"Date.hpp"
#include"WeatherPrediction.hpp"
#include<stdio.h>
#include<stdlib.h>
#include<string>

AirPrediction::AirPrediction() : WeatherPrediction()
{
}

AirPrediction::AirPrediction(std::string place, int date, double temparature, int wet, int pressure, double speed) : WeatherPrediction(place , date)
{
    this->temparature = temparature;
    this->wet = wet;
    this->pressure = pressure;
    this->speed = speed;
}

AirPrediction::~AirPrediction()
{
}

void AirPrediction::SetTemperature(double t)
{
    this->temparature = t;
}

void AirPrediction::SetWet(int w)
{
    this->wet = w;
}

void AirPrediction::SetPressure(int p)
{
    this->pressure = p;
}

void AirPrediction::SetSpeed(double s)
{
    this->speed = s;
}

double AirPrediction::GetTemperature(double t)
{
    return temparature;
}

int AirPrediction::GetWet(int w)
{
    return wet;
}

int AirPrediction::GetPressure(int p)
{
    return pressure;
}

double AirPrediction::GetSpeed(double s)
{
    return speed;
}

double AirPrediction::AvarageTemp(AirPrediction*air[])
{
    
    for (int i = 0; i <= 4; i++)
    {
        double *a = *air[i]->GetTemperature;
        double avarage = avarage + *a;
    }
    double avarage = avarage / 4.0;
    cout << avarage;
    return avarage;
}

void AirPrediction::HighestSpeed(AirPrediction *air[])
{
    
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
            if (&air[i]->GetSpeed > &air[j]->GetSpeed)
            {
                AirPrediction st = *air[i];
                air[i] = air[j];
                *air[j] = st;
            }
    
}

void AirPrediction::HighestWet(AirPrediction *air[])
{
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++)
            if (&air[i]->GetWet > &air[j]->GetWet)
            {
                AirPrediction st = *air[i];
                air[i] = air[j];
                *air[j] = st;
            }
}
