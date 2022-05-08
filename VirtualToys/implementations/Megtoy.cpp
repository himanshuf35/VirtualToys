#include <stdio.h>
#include <iostream>
#include "Megtoy.hpp"

using namespace std;

Megtoy::Megtoy(int x, int y) {
    xPosition = x;
    yPosition = y;
}

void Megtoy::moveUp() {
    yPosition = ++yPosition;
}

void Megtoy::moveDown() {
    yPosition = --yPosition;
}

void Megtoy::moveForward() {
    xPosition = ++xPosition;
}

void Megtoy::moveBackward() {
    xPosition = --xPosition;
}

void Megtoy::showPosition() {
    cout << "Megtoy is at position x: " << xPosition << " y: " << yPosition << endl;
}