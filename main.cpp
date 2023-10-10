// Nagadeepak
// Banner ID: Y0000000

#include <iostream>
#include <cmath>
#include <string>
#include <limits>

// Constants
const int MIN_LOCATION = -20;
const int MAX_LOCATION = 20;
const std::string BANNER_ID = "Y0000000";

bool isWithinArea(int shipLocation, int shipSize, int targetLocation) {
    return targetLocation >= (shipLocation - shipSize) && targetLocation <= (shipLocation + shipSize);
}

void determineShips(const std::string &bannerID, std::string &enterprise, int &enterpriseSize, std::string &enemy, int &enemySize) {
    int lastDigit = bannerID.back() - '0';
    int secondLastDigit = bannerID[bannerID.length() - 2] - '0';

    // Determine Enterprise
    switch (secondLastDigit) {
        case 1: case 2:
            enterprise = "Enterprise-NX";
            enterpriseSize = 3;
            break;
        case 3: case 4:
            enterprise = "Enterprise-A";
            enterpriseSize = 4;
            break;
        case 5: case 6:
            enterprise = "Enterprise-B";
            enterpriseSize = 5;
            break;     
        case 7: case 8:
            enterprise = "Enterprise-D";
            enterpriseSize = 6;
            break;
        case 9: case 0:
            enterprise = "Enterprise-E";
            enterpriseSize = 7;
            break;
    }

    // Determine Enemy Ship
    switch (lastDigit) {
        case 1: case 2:
            enemy = "Borg Cube";
            enemySize = 10;
            break;
        case 3: case 4:
            enemy = "Doomsday Machine";
            enemySize = 9;
            break;
        case 5: case 6:
            enemy = "Dominion Cruiser";
            enemySize = 8;
            break;
        case 7: case 8:
            enemy = "Romulan Bird of Prey";
            enemySize = 7;
:
