//
// Created by amank on 01-10-2025.
//

#ifndef COMMERCIALAIRCRAFT_H
#define COMMERCIALAIRCRAFT_H

#include "Aircraft.h"

class CommercialAircraft : public Aircraft {
    public:
    CommercialAircraft(const std::string& id , double altitude, double speed, double x, double y);
    void updatePosition() override;
    std::string getStatus() const override;
};

#endif //COMMERCIALAIRCRAFT_H
