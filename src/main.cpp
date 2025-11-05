#include "commercialAircraft.h"
#include "Aircraft.h"
#include "MilitaryAircraft.h"
#include "CargoAircraft.h"
#include "RadarSystem.h"
#include<iostream>

int main() {
    CommercialAircraft c1("C1" , 30000, 500,0,0);
    MilitaryAircraft m1("M1" , 32000, 600,10,10);
    CargoAircraft g1("G1" ,28000,450,20,20 );

    RadarSystem radar;
    radar.addObject(&c1);
    radar.addObject(&m1);
    radar.addObject(&g1);

    for (int t = 0; t < 5; t++) {
        std::cout << "\nTime step " << t << ":\n";
        c1.updatePosition();
        m1.updatePosition();
        g1.updatePosition();

        std::cout << c1.getStatus() << "\n";
        std::cout << m1.getStatus() << "\n";
        std::cout << g1.getStatus() << "\n";

        radar.detectConflicts();
    }

    return 0;
}
// Created by amank on 01-10-2025.
//
