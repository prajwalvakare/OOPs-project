//
// Created by amank on 01-10-2025.
//

#ifndef RADARSYSTEM_H
#define RADARSYSTEM_H

#include "AirObject.h"
#include<vector>

class RadarSystem {
    private:
    std::vector<AirObject*> objects;
    public:
    void addObject(AirObject* obj);
    void detectConflicts() const;

};
#endif //RADARSYSTEM_H
