//
//  Flatulan.hpp
//  cs32_project1
//
//  Created by John Lee on 4/5/21.
//  Copyright © 2021 John Lee. All rights reserved.
//

#ifndef FLATULAN_H
#define FLATULAN_H

class City;

class Flatulan
{
  public:
        // Constructor
    Flatulan(City* cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    bool haveIBeenConverted() const;

        // Mutators
    void move();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif //FLATULAN_H
