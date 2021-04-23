//
//  main.cpp
//  cs32_project1
//
//  Created by John Lee on 4/5/21.
//  Copyright © 2021 John Lee. All rights reserved.
//

// gas.cpp

#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>

#include "Flatulan.h"
#include "Player.h"
#include "City.h"
#include "globals.h"
#include "Game.h"


using namespace std;


int main()
{
      // Create a game
      // Use this instead to create a mini-game:   Game g(3, 4, 2);
    Game g(7, 8, 25);

      // Play the game
    g.play();
}
