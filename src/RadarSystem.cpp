#include "RadarSystem.h"
#include "Aircraft.h"
#include <iostream>
#include <iomanip>
#include <cmath>

void RadarSystem::addObject(AirObject* obj) {
    objects.push_back(obj);
}

void RadarSystem::detectConflicts() const {
    for (size_t i = 0; i < objects.size(); ++i) {
        for (size_t j = i + 1; j < objects.size(); ++j) {
            auto* a1 = dynamic_cast<Aircraft*>(objects[i]);
            auto* a2 = dynamic_cast<Aircraft*>(objects[j]);

            if (a1 && a2) {
                double dx = a1->getX() - a2->getX();
                double dy = a1->getY() - a2->getY();
                double dist = std::sqrt(dx * dx + dy * dy);

                if (dist < 50.0) { // conflict threshold
                    std::cout << " Conflict: "
                              << std::setw(4) << a1->getId()
                              << " <->"
                              << std::setw(4) << a2->getId()
                              << " | Dist: " << std::fixed << std::setprecision(1) << dist
                              << "\n";
                }
            }
        }
    }
}
