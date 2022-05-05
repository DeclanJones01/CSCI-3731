#include "Satellite.h"
#include "Planet.h"
#include "vector.h"


Satellite::Satellite() {

}

satellite::~satellite() {

}

bool Satellite::update(int dt) {
    Vector acc;
    if (!center.gravAcc(position, acceleration)) {
        std::cout << "Mayday" << std::endl;
        return false;
    }
    position = position + velocity * dt;
    velocity = velocity + acceleration * dt;
    return true;
}