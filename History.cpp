//
//  History.cpp
//  cs32_project1
//
//  Created by John Lee on 4/5/21.
//  Copyright © 2021 John Lee. All rights reserved.
//

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
#include "History.h"


using namespace std;


History::History(int nRows, int nCols)
 : m_rows(nRows), m_cols(nCols)
{
    for (int i = 0; i < m_rows; i++)
          for (int j = 0; j < m_cols; j++)
               m_grid[i][j] = 0;
}

bool History::record(int r, int c)
{
    if(r < 0 || c < 0 || r > MAXROWS || c > MAXCOLS)
        return false;
    
    m_grid[r-1][c-1]++;
    return true;
}

void History::display() const
{
    clearScreen();
    
    for (int i = 0; i < m_rows; i++)
    {
        for (int j = 0; j < m_cols; j++)
        {
            char dot = '.';
            int x = m_grid[i][j];
            if (x >= 26)
                dot = 'Z';
            else if (x > 0)
                dot = 'A' + x-1;
            cout << dot;
        }
        cout << endl;
    }
    cout << endl;
}
