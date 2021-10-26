//
// Created by Kolodii Daniil on 26.10.2021.
//

#include "Student.h"

Student::Student(string s_n, double av_m, int pass_c, int age, Sex sex, bool st, bool nP) {
second_name = s_n;
avarrage_mark = av_m;
passes_count = pass_c;
    this->age = age;
    this->sex = sex;
    stependiat = st;
    needPrepisnoy =nP;
    Stependiat(*this);
    Soldier(*this);

}

void Student::ToString() {
cout<<"SecondName: "<<second_name<<"\nAvvarage mark: "<<avarrage_mark<<"\nPasses count: "<<passes_count<<"\nAge: "<<age<<"\nStependiat: "<< stependiat<<"\nNeed to serve: "<<needPrepisnoy<<"\n\n";
}
