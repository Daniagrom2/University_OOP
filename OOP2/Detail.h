//
// Created by Kolodii Daniil on 20.09.2021.
//

#ifndef OOP2_DETAIL_H
#define OOP2_DETAIL_H
#pragma once;
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Detail {
public:
string get_name();
    string get_marka();
    string get_country();
    string get_date();
int get_work_time();
void set_name(string);
    void set_marka(string);
    void set_country(string);
    void set_date(string);
void set_work_time(int);

private:
    string name;
    string marka;
    string country;
    string date;
    int work_time;

};


#endif //OOP2_DETAIL_H
