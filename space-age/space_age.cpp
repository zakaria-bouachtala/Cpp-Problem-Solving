#include "space_age.h"
#include<iostream>
#include <iomanip>
#include <cmath>
#include<string>

using namespace std;

namespace space_age {

    space_age::space_age(long long sec) {
        second = sec;
    }
    long long space_age::seconds() const {
        return second;
    }
    double space_age::on_earth() const {
        return (double(second) / 31557600.0) / 1.0;
    }
    double space_age::on_mercury() const {
        return (double(second) / 31557600.0) / 0.2408467;
    }
    double space_age::on_venus() const {
        return (double(second) / 31557600.0) / 0.61519726;
    }
    double space_age::on_mars() const {
        return (double(second) / 31557600.0) / 1.8808158;
    }
    double space_age::on_jupiter() const {
        return (double(second) / 31557600.0) / 11.862615;
    }
    double space_age::on_saturn() const {
        return (double(second) / 31557600.0) / 29.447498;
    }
    double space_age::on_uranus() const {
        return (double(second) / 31557600.0) / 84.016846;
    }
    double space_age::on_neptune() const {
        return (double(second) / 31557600.0) / 164.79132;
    }




}  // namespace space_age
