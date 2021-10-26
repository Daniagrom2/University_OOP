//
// Created by Kolodii Daniil on 26.10.2021.
//

#ifndef OOP5_STUDENT_H
#define OOP5_STUDENT_H

enum Sex {
    MALE,
    FEMALE
};

class Student {
public:
    Student(string s_n, double av_m, int pass_c, int age, Sex sex, bool st, bool nP);

    string second_name;
    double avarrage_mark;
    int passes_count;
    int age;
    Sex sex;
    bool stependiat;
    bool needPrepisnoy;

    void ToString();
    class Stependiat {
    public:
        Stependiat(Student &a) {
            if (a.passes_count < 10 && a.avarrage_mark > 4.5)
                a.stependiat = 1;
            else
                a.stependiat = 0;
        }
    };

    class Soldier {
    public:
        Soldier(Student &a) {
            if (a.age >= 18 && a.sex == MALE)
                a.needPrepisnoy = 1;
            else
                a.needPrepisnoy = 0;
        }
    };
};


#endif //OOP5_STUDENT_H
