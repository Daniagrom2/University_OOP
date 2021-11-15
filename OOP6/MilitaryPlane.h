//
// Created by Kolodii Daniil on 15.11.2021.
//

#ifndef OOP6_MILITARYPLANE_H
#define OOP6_MILITARYPLANE_H

#include "Extension.h"

class MilitaryPlane : public Extension{
public:
    MilitaryPlane() : Extension() {
        _name = "Warior";
        _weight = 25999.99;
        _guns_count = 50;
    }

    MilitaryPlane(string name, double weight, int guns_count) : Extension(name, weight) {
        _guns_count = guns_count;
    }

    void info() override {
        cout << "Plane name: " << _name << "\nWeight: " << _weight <<"\nGuns count: " <<_guns_count<<"\nNumber: " << _number << "\nAll Count:"
             << _count << "\n";

    }
    void shot(){
        for (int i = 0; i < 4; ++i) {
            cout<<"paw!\t";
        }
        cout<<"\n";
    }
    void ShowData() override{
        info();
        int a;
        int b;
        cout<<"Enter number:";
        cin>>a;
        cout<<"Enter number:";
        cin>>b;
        cout<<a <<" - "<<b<<" = "<<a-b<<endl;
    }
    void set_name(string name)override{
        _name = name;
    }
    friend std::ostream& operator<< (std::ostream &out, const MilitaryPlane &plane);
    friend std::istream& operator>> (std::istream &in, MilitaryPlane &plane);
protected:
    int _guns_count;
};

std::ostream& operator<< (std::ostream &out, const MilitaryPlane &plane)
{
    out<<"Plane name: " << plane._name << "\nWeight: " << plane._weight <<"\nGuns count: " <<plane._guns_count<<"\nNumber: " <<plane._number << "\nAll Count:"
                      << plane._count << "\n";

    return out;
}
std::istream& operator>> (std::istream &in, MilitaryPlane &plane){
    cout<<"Enter name:";
    in>>plane._name;
    cout<<"Enter weight:";
    in>>plane._weight;
    cout<<"Enter guns count:";
    in>>plane._guns_count;
}
#endif //OOP6_MILITARYPLANE_H
