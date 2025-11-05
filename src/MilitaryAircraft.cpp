#include "MilitaryAircraft.h"
#include <sstream>
#include <iomanip>

MilitaryAircraft::MilitaryAircraft(const std::string& id, double altitude, double speed, double x, double y)
    : Aircraft(id, altitude, speed, x, y) {}

void MilitaryAircraft::updatePosition() {
    x += speed * 0.12;
    y += speed * 0.10;
}

std::string MilitaryAircraft::getStatus() const {
    std::ostringstream ss;
    ss << std::left << std::setw(12) << "[Military]"
       << std::setw(6) << id
       << " (" << std::fixed << std::setprecision(1) << std::setw(6) << x
       << "," << std::setw(6) << y << ") "
       << " Alt: " << std::setw(8) << altitude
       << " Spd: " << std::setw(6) << speed;
    return ss.str();
}
