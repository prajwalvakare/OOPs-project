//
// Created by amank on 01-10-2025.
//

#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include "AirObject.h"
#include <string>

class Aircraft: public AirObject {
    protected:
    std::string id;
    double altitude;
    double speed;
    double x,y;

    public:
    Aircraft(const std::string& id, double altitude, double speed, double x, double y);

    void updatePosition() override;
    std::string getStatus() const override;

    std::string getId() const{return id;}
    double getX() const{return x;}
    double getY() const{return y;}
};

#endif //AIRCRAFT_H
