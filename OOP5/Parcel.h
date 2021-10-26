//
// Created by Kolodii Daniil on 26.10.2021.
//

#ifndef OOP5_PARCEL_H
#define OOP5_PARCEL_H


#include <vector>

class Parcel {
public:
    Parcel(){}
    Parcel(double height, double width, double length) {
        this->height = height;
        this->length = length;
        this->width = width;

        count++;
    }

    double height;
    double width;
    double length;
    static int count;
    int ID = count - 1;

    void ToString() {
        cout << "Height: " << height << "\nWidth: " << width << "\nLength: " << length << "\nID: "<<ID  << endl << endl;
    }
};
int Parcel::count = 1;
class ParcelArray {
public:
    ParcelArray() {
        parcel.reserve(100);
    }

    vector<Parcel> parcel;

    Parcel SmallestVolume() {
        int index = 0;
        int value = parcel[0].height * parcel[0].width * parcel[0].length;
        int indexator = 0;
        for (auto i = parcel.begin(); i < parcel.end(); i++) {
            if (i->height * i->width * i->length < value) {
                index = indexator;
                value = i->height * i->width * i->length;
            }
            indexator++;
        }
        return parcel[index];
    }

    void ParcelCount(int value) {
        if (parcel.size() > value)
            cout << "Exeption!";
        else
            cout << parcel.size();
    }

};

#endif //OOP5_PARCEL_H
