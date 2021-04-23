//
//  History.hpp
//  cs32_project1
//
//  Created by John Lee on 4/5/21.
//  Copyright © 2021 John Lee. All rights reserved.
//

#ifndef History_hpp
#define History_hpp

#include "globals.h"

class History
{
  public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
    
private:
    int       m_rows;
    int       m_cols;
    int       m_grid[MAXROWS][MAXCOLS];
};

#endif /* History_hpp */
