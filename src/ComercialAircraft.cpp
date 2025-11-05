#include "CommercialAircraft.h"
#include <sstream>
#include <iomanip>   // for formatting

CommercialAircraft::CommercialAircraft(const std::string &id, double altitude, double speed, double x, double y)
    : Aircraft(id, altitude, speed, x, y) {}

void CommercialAircraft::updatePosition() {
    // Maybe a bit slower/more stable than the base
    x += speed * 0.08;
    y += speed * 0.05;
}

std::string CommercialAircraft::getStatus() const {
    std::ostringstream ss;
    ss << std::left << std::setw(12) << "[Commercial] "   // label
       << std::setw(6)  << id                           // aircraft ID
       << " (" << std::fixed << std::setprecision(1) << std::setw(6) << x
       << "," << std::setw(6) << y << ") "
       << " Alt: " << std::setw(8) << altitude
       << " Spd: " << std::setw(6) << speed;
    return ss.str();
}
