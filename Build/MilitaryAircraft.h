//
// Created by amank on 01-10-2025.
//

#ifndef MILITARYAIRCRAFT_H
#define MILITARYAIRCRAFT_H

#include "Aircraft.h"

class MilitaryAircraft : public Aircraft {
public:
    MilitaryAircraft(const std::string& id, double altitude, double speed, double x, double y);
    void updatePosition() override;   // Override movement
    std::string getStatus() const override;  // Custom status
};

#endif //MILITARYAIRCRAFT_H
