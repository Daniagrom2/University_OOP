//
// Created by Kolodii Daniil on 26.10.2021.
//

#ifndef OOP5_COUNTRY_H
#define OOP5_COUNTRY_H


class Country {
public:
    Country(string name,string capital,int population,string money_name);
    void SetName(string name);

    void SetCapital(string capital);

    void SetPopulation(int population);

    void SetMoney(string name);

    string GetName();

    string GetCapital();

    int GetPopulation();

    string GetMoney();

    Country& operator= (const Country &co);
    void ToString();
private:
    string name;
    string capital;
    int population;
    string money_name;


};


#endif //OOP5_COUNTRY_H
