#include "Aircraft.h"
#include <sstream>
#include <iomanip>   // for formatting

Aircraft::Aircraft(const std::string& id, double altitude, double speed, double x, double y)
    : id(id), altitude(altitude), speed(speed), x(x), y(y) {}

void Aircraft::updatePosition() {
    // Default movement (can be overridden in subclasses)
    x += speed * 0.1;
    y += speed * 0.1;
}

std::string Aircraft::getStatus() const {
    std::ostringstream ss;
    ss << "Aircraft " << id
       << " at (" << std::fixed << std::setprecision(1) << x << ", " << y << ") "
       << " Altitude: " << altitude
       << " Speed: " << speed;
    return ss.str();
}
