// sdev-340-discussion-car-sim.h

#pragma once
#include "sdev-340-discussion-car-sim-class-automobile.cpp"

// Define the Automobile class
// this program compiles and runs with just the Automobile class
// why do i see some examples similar to the BaseVehicle class below?
// it seems unnecessary to have a BaseVehicle class declared like below
class Automobile;

// Define the BaseVehicle class
// class BaseVehicle : public Automobile
// {
//     public:
//         BaseVehicle(string make, string model, string trim, string edition, int year);
//         virtual ~BaseVehicle();

//         void accelerate();
//         void brake();
//         void displayInfo() const;

//     private:
//         string make;
//         string model;
//         string trim;
//         string edition;
//         int year;
        
// };