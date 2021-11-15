//
// Created by Kolodii Daniil on 15.11.2021.
//

#ifndef OOP6_PLANE_H
#define OOP6_PLANE_H


class Plane {
public:
    Plane() {

            _count++;
            _number = _count - 1;
        _name = "";
        _weight = 0;

        info();

    }

    Plane(string name, double weight) {
            _count++;
            _number = _count - 1;
        _name = name;
        _weight = weight;
        info();

    }

    ~Plane() {
        _count--;
        cout << "Number:" << _number << " destroyed" << endl;
    }

    virtual void info(){
        cout << "Plane name: " << _name << "\nWeight: " << _weight <<"\nNumber: " << _number << "\nAll Count:"
             << _count << "\n";
    }

    int MaxNumOfPasangers() {
        return _weight / 65;
    }

    double HowMuchFreeSpace(int count_of_people) {
        return _weight - (count_of_people * 65);
    }

    virtual void set_name(string name) = 0;

protected:
    string _name;
    double _weight;
    static int _count;
    int _number;
};
int Plane::_count = 0;

#endif //OOP6_PLANE_H
