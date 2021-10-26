//
// Created by Kolodii Daniil on 26.10.2021.
//

#include "Country.h"

void Country::SetName(string name) {
    this->name = name;
}

void Country::SetCapital(string capital) {
this->capital = capital;
}

void Country::SetPopulation(int population) {
this->population = population;
}

void Country::SetMoney(string name) {
this->money_name = name;
}

string Country::GetName() {
    return name;
}

string Country::GetCapital() {
    return capital;
}

int Country::GetPopulation() {
    return population;
}

string Country::GetMoney() {
    return money_name;
}

Country& Country::operator=(const Country &co) {
    name = co.name;
    capital = co.capital;
    population = co.population;
    money_name = co.money_name;
}

void Country::ToString() {
    cout<<"Name: "<<name<<"\nCapital: "<<capital<<"\nPopulation: "<<population<<"\nMoney name: "<<money_name<<endl;
}

Country::Country(string name, string capital, int population, string money_name) {
    this->name= name;
    this->population = population;
    this->money_name = money_name;
    this->capital = capital;
}


