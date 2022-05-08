//
//  main.cpp
//  VirtualToys
//
//  Created by Himanshu Yadav on 08/05/22.
//

#include <iostream>
#include "Megtoy.hpp"

int main(int argc, const char * argv[]) {
    Megtoy firstToy(0, 0);
    firstToy.moveForward();
    firstToy.moveDown();
    firstToy.moveDown();
    firstToy.moveBackward();
    firstToy.moveUp();
    firstToy.moveBackward();
    firstToy.showPosition();
    return 0;
}
