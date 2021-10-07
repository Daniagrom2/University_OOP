//
// Created by Kolodii Daniil on 20.09.2021.
//

#include "Statistic.h"

void Statistic::add_value(double value) {
data.push_back(value);

}

double Statistic::min_value() {
    double min = data[0];
    for (int i = 0; i < data.size(); i++) {
        if(data[i]<min)
            min = data[i];
    }
    return min;
}

double Statistic::max_value() {
    double max = data[0];
    for (int i = 0; i < data.size(); i++) {
        if(data[i] > max)
            max = data[i];
    }
    return max;
}

double Statistic::arithmetic_mean() {
    double sum= 0;
    for (int i = 0; i < data.size(); i++) {
   sum += data[i];
    }
    return sum/data.size();
}

double Statistic::moda() {
    int rmax = 0;
    double max = data[0];
            int cmax = 0;

    for (int i = 0; i < data.size(); i++)
    {
        if (cmax > rmax)
        {
            rmax = cmax;
            max = data[i - 1];
        }
        cmax = 0;
        for (int j = i; j < data.size(); j++)
            if (data[j] == data[i])
                cmax++;
    }
    return max;
}

double Statistic::mediana() {
    if (data.size()%2==0){
        return(data[(data.size()/2)-1]+data[data.size()/2])/2;
    }else{
        return data[data.size()/2];
    }

}

double Statistic::bigger_than_mean() {
    auto a = arithmetic_mean();
    for (int i = 0; i < data.size(); i++) {
        if(a<data[i])
            cout<<data[i]<<"\t";
    }
}

double Statistic::smaller_than_mean() {
    auto a = arithmetic_mean();
    for (int i = 0; i < data.size(); i++) {
        if(a>data[i])
            cout<<data[i]<<" ";
    }
}
