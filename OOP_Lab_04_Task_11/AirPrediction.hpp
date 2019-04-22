#pragma once
#include"Date.h"
#include"WeatherPrediction.hpp"
#include<stdio.h>
#include<stdlib.h>
#include<string>
class AirPrediction : public WeatherPrediction
{
private:
    double temparature;
    int wet;
    int pressure;
    double speed;
    
public:
    AirPrediction();
    AirPrediction(std::string place, int date, double temparature, int wet, int pressure, double speed);
    ~AirPrediction();
    
    void SetTemperature(double t);
    double GetTemperature(double t);
    
    void SetWet(int w);
    int GetWet(int w);
    
    void SetPressure(int p);
    int GetPressure(int p);
    
    void SetSpeed(double s);
    double GetSpeed(double s);
    
    double AvarageTemp(AirPrediction*air[]);
    void HighestSpeed(AirPrediction*air[]);
    void HighestWet(AirPrediction *air[]);
};

