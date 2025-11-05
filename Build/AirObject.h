//
// Created by amank on 30-09-2025.
//

#ifndef AIROBJECT_H
#define AIROBJECT_H

#include <string>

class AirObject {
    public:
    virtual void updatePosition()=0;
    virtual std::string getStatus() const =0;
    virtual ~AirObject(){}  // Virtual destructor for polymorphism
};

#endif //AIROBJECT_H
