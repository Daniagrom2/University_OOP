//
// Created by Kolodii Daniil on 20.09.2021.
// First task
//

#ifndef OOP2_STATISTIC_H
#define OOP2_STATISTIC_H
#pragma once
#include <vector>

using namespace std;

class Statistic {
public:
    void add_value(double);
    double min_value();
    double max_value();
    double arithmetic_mean();
    double moda();
    double mediana();
    double bigger_than_mean();
    double smaller_than_mean();

private:
    vector<double> data;

};


#endif //OOP2_STATISTIC_H
