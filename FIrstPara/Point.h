//
// Created by Kolodii Daniil on 03.09.2021.
//

#ifndef FIRSTPARA_POINT_H
#define FIRSTPARA_POINT_H
#pragma once
#include "Point.cpp"
#include <iostream>
#include <memory>

using namespace std;

class Point {
public:
    Point(int, int);
    Point sum(const Point&);
    int get_x();
    int get_y();
    Point operator+(const Point&);
    Point operator+(int);
    Point& operator++();
    Point& operator++(int);
    int dist() const;
    bool operator>(const Point&);
    bool operator<(const Point&);
    bool operator==(const Point&);
    bool operator!=(const Point&);
private:
    int _x;
    int _y;
};
Point::Point(int x, int y) : _x(x), _y(y) {}

Point Point::sum(const Point& point) {

    return { _x + point._x, _y + point._y };
}

int Point::get_x() { return _x; }

int Point::get_y() { return _y; }

Point Point::operator+(const Point& point) {
    return { _x + point._x, _y + point._y };
}

Point Point::operator+(int value) {
    return { _x + value, _y + value };
}

Point& Point::operator++() {
    _x++;
    _y++;
    return *this;
}

Point& Point::operator++(int n) {
    Point tmp(_x, _y);
    _x++;
    _y++;
    return tmp;
}

int Point::dist() const {
    return sqrt(pow(_x, 2) + pow(_y, 2));
}

bool Point::operator>(const Point& point)
{
    return dist() > point.dist();
}

bool Point::operator<(const Point& point) {
    //return !(*this > point);
    return dist() < point.dist();
}

bool Point::operator==(const Point& point) {
    return _x == point._x && _y == point._y;
}

bool Point::operator!=(const Point& point) {
    return !(*this == point);
}

#endif //FIRSTPARA_POINT_H
