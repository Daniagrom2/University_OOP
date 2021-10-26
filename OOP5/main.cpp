#include <iostream>
using namespace std;
#include "vector"
#include "Country.h"
#include "Country.cpp"
#include "Parcel.h"
#include "Parcel.cpp"
#include "Student.h"
#include "Student.cpp"


int main() {
    ///////1////////
//    Country Ukraine("Ukraine","Kiev",31000000,"GRN");
//    Country Poland("Poland","Warshava",20000000,"Zloti");
//    if(Ukraine.GetPopulation()>Poland.GetPopulation())
//    Ukraine.ToString();
//    else
//    Poland.ToString();
//    cout<<endl;
//    Country Ukraine2 = Ukraine;
//    Ukraine2.SetCapital("Lviv");
//    Ukraine2.ToString();
    ///////2////////
//    ParcelArray p;
//    Parcel a(10.0,15.0,20.0);
//    p.parcel.push_back(a);
//    p.parcel.push_back(Parcel(11,12,10));
//    p.parcel.push_back(Parcel(15,7,5));
//    p.SmallestVolume().ToString();
//p.ParcelCount(2);
    /////////3////////
Student a("Lock",5,9,18,MALE,0,0);
    Student b("Nikolenko",3,4,19,FEMALE,1,1);
a.ToString();
b.ToString();
    return 0;
}
