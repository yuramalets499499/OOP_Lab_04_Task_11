#pragma once
#include"Date.h"
#include"WeatherPrediction.h"
#include"AirPrediction.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

int main()
{
    system("color F0");
    
    AirPrediction **air = new AirPrediction*[4];
    air[0] = new AirPrediction("Lviv", 10, 12.5, 75, 776, 5.0);
    air[1] = new AirPrediction("Kharkiv", 11, 17.5, 85, 777, 6.0);
    air[2] = new AirPrediction("Dnipro", 12, 12.0, 70, 775, 5.5);
    air[3] = new AirPrediction("Rivne", 8, 15.5, 75, 770, 9.0);
    
    AirPrediction obj;
    cout << "Avarage temperature is " << obj.AvarageTemp << endl;
    obj.HighestSpeed;
    int i = 0;
    AirPrediction *point;
    for (i = 0, point = *air; i < 4; i++, point++)
    {
        cout << i+1<< "\n Speed" << point->GetSpeed << " in the city of" << point->GetPlace << endl;
    }
    obj.HighestWet;
    for (i = 0, point = *air; i < 4; i++, point++)
    {
        if (i == 1)
        {
            cout << i + 1 << "\n the highest humidity" << &point->GetWet << "is in the city of" << &point->GetPlace << endl;
        }
        else if(i==4)
        {
            cout << i + 1 << "\n the lowest humidity" << &point->GetWet << "is in the city of" << &point->GetPlace << endl;
        }
        else
        {
            cout << i + 1 << "\n humidity" << &point->GetWet << " in the city of" << &point->GetPlace << endl;
        }
    }
    
    delete air[0];
    delete air[1];
    delete air[2];
    delete air[3];
    delete[] air;
    
    return 0;
    system("pause");
}
