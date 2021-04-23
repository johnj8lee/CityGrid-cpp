//
//  Player.hpp
//  cs32_project1
//
//  Created by John Lee on 4/5/21.
//  Copyright © 2021 John Lee. All rights reserved.
//

#ifndef PLAYER_H
#define PLAYER_H

class City;

class Player
{
  public:
        // Constructor
    Player(City *cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    int  health() const;
    bool isPassedOut() const;

        // Mutators
    void  preach();
    void  move(int dir);
    void  getGassed();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
    int   m_health;
    int   m_age;
};

#endif //PLAYER_H
