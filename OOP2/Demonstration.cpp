//
// Created by Kolodii Daniil on 21.09.2021.
//

#include "Demonstration.h"

void Demonstration::show_Statistic() {
Statistic a;
a.add_value(3.12);
    a.add_value(3.12);
    a.add_value(5.1);
    a.add_value(4.2);
cout<<"arithmetic_mean: "<<a.arithmetic_mean()<<"\n";
    cout<<"mediana: "<<a.mediana()<<"\n";
    cout<<"moda: "<<a.moda()<<"\n";
    cout<<"max: "<<a.max_value()<<"\n";
    cout<<"min: "<<a.min_value()<<"\n";
    a.bigger_than_mean();
    cout<<endl;
    a.smaller_than_mean();
    cout<<endl;
    cout<<endl;
}

void Demonstration::show_Dog() {
Dog a;
Dog v("Myhtar",3);
cout<<a.get_name()<<"\t";
cout<<a.get_age()<<"\n";
    cout<<v.get_name()<<"\t";
    cout<<v.get_age()<<"\n";
v.voice();
cout<<endl;
cout<<"Constructor called: "<<v.counter()-1<<endl;
    cout<<endl;
}

void Demonstration::show_Detail() {
    Detail a;
    a.set_name("Detal");
    a.set_country("Ukraine");
    a.set_date("10/12/2021");
    a.set_marka("BMW");
    a.set_work_time(5);
    cout<<"Name: "<<a.get_name()<<"\nCountry: "<<a.get_country()<<"\nDate: "<<a.get_date()<<"\nMarka: "<<a.get_marka()<<"\nWork Time: "<<a.get_work_time()<<" years"<<endl;
    cout<<endl;
}

