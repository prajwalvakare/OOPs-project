#include "CargoAircraft.h"
#include <sstream>
#include <iomanip>

CargoAircraft::CargoAircraft(const std::string& id, double altitude, double speed, double x, double y)
    : Aircraft(id, altitude, speed, x, y) {}

void CargoAircraft::updatePosition() {
    x += speed * 0.05;
    y += speed * 0.04;
}

std::string CargoAircraft::getStatus() const {
    std::ostringstream ss;
    ss << std::left << std::setw(12) << "[Cargo]"
       << std::setw(6) << id
       << " (" << std::fixed << std::setprecision(1) << std::setw(6) << x
       << "," << std::setw(6) << y << ") "
       << " Alt: " << std::setw(8) << altitude
       << " Spd: " << std::setw(6) << speed;
    return ss.str();
}
