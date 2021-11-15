//
// Created by Kolodii Daniil on 15.11.2021.
//

#ifndef OOP6_RESIDENTPLANE_H
#define OOP6_RESIDENTPLANE_H

#include "Extension.h"
class ResidentPlane:public Extension{
public:
    ResidentPlane() : Extension() {
        _name = "Warior";
        _weight = 25999.99;
        _personal_count = 50;
    }

    ResidentPlane(string name, double weight, int personal_count) : Extension(name, weight) {
        _personal_count = personal_count;
    }

    void info() override {
        cout << "Plane name: " << _name << "\nWeight: " << _weight <<"\nPersonal count: " <<_personal_count<<"\nNumber: " << _number << "\nAll Count:"
             << _count << "\n";

    }
    void signal(){
        for (int i = 0; i < 4; ++i) {
            cout<<"Bip!\t";
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
protected:
    int _personal_count;
};


#endif //OOP6_RESIDENTPLANE_H
