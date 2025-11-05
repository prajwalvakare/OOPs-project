//
// Created by amank on 01-10-2025.
//

#ifndef CARGOAIRCRAFT_H
#define CARGOAIRCRAFT_H
#include "Aircraft.h"

class CargoAircraft : public Aircraft {
public:
    CargoAircraft(const std::string& id, double altitude, double speed, double x, double y);
    void updatePosition() override;
    std::string getStatus() const override;
};

#endif //CARGOAIRCRAFT_H
