
/*
 11. —творити базовий клас ѕ–ќ√Ќќ« ѕќ√ќƒ»(задаютьс€ м≥сце та дата).—творити пох≥дний
 клас ѕ–ќ√Ќќ« ўќƒќ ѕќ¬≤“–я(задаютьс€ температура, волог≥сть, тиск, швидк≥сть в≥тру).
 ƒл€ введених даних про прогноз погоди визначити середню температуру пов≥тр€, дн≥ з≥
 найвищою швидк≥стю в≥тру та найвищою швидк≥стю хвил≥, найвищою та найнижчою
 волог≥стю.
 */


#pragma once
#include"Date.hpp"
#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include <iostream>
using namespace std;

class WeatherPrediction //базовий клас "ѕрогноз погоди"
{
private:
    std::string place;
    int date;
public:
    WeatherPrediction();
    WeatherPrediction(std::string place, int date);
    ~WeatherPrediction();
    
    void SetPlace(char misto);
    std::string GetPlace(char misto);
    void SetDate(int den);
    int GetDate(int den);
};

