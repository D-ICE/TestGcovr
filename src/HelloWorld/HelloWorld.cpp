//
// Created by bm on 12/10/2021.
//

#include "HelloWorld.h"

#include <iostream>


int HelloWorld(int a) {
    for (int i = 0; i < a; i++)
        std::cout << "Hello world !" << std::endl;
    return 42;
}
