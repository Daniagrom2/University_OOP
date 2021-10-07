//
// Created by Kolodii Daniil on 20.09.2021.
//

#include "Detail.h"

string Detail::get_name() {
    return name;
}

string Detail::get_marka() {
    return marka;
}

string Detail::get_country() {
    return country;
}

string Detail::get_date() {
    return date;
}

int Detail::get_work_time() {
    return work_time;
}

void Detail::set_name(string name) {
    this->name = name;
}

void Detail::set_marka(string marka) {
    this->marka = marka;
}

void Detail::set_country(string country) {
this->country = country;
}

void Detail::set_date(string date) {
this->date = date;
}

void Detail::set_work_time(int time) {
work_time = time;
}
