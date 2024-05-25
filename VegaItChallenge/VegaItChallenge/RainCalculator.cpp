#include <iostream>
#include <vector>
#include "RainCalculator.h"
#include "TableConstants.h"

using namespace std;

int calculateRain(vector<vector<int>>& table)
{
    State tableState = selectedEmpty;

    int bgCol = 0;
    int endCol = TABLE_COLS;

    int numWater = 0;
    int tempWater = 0;

    int whiteStartedIndex = 0;

    for (int i = TABLE_ROWS - 1; i >= 0; --i) {
        tempWater = 0;
        tableState = selectedEmpty;
        for (int j = bgCol; j < endCol; ++j) { 
            if (tableState == selectedEmpty) {
                if (table[i][j] == 0) {         //Row begins with white
                    if (j == 0) {
                        continue;
                    }
                    else {                      //if starting with white, the next row gets "shorter"
                        bgCol++;
                    }
                }
                else if (bgCol == TABLE_COLS - 1) {     //Entire row is empty
                    break;
                }
                else {
                    tableState = black;
                }
            }
            else if (tableState == black) {
                if (table[i][j] == 1) {         //continious black blocks
                    continue;
                }
                if (j == endCol - 1) {          
                    numWater += tempWater;
                }
                if (table[i][j] == 0) {
                    tableState = white;             //its only going to be white after there's already been one black
                    whiteStartedIndex = j;
                    tempWater++;
                }
            }       
            else {                                  //previous was white
                if (table[i][j] == 1) {             //whites have found its ending black 
                    tableState = black;
                    numWater += tempWater;
                    tempWater = 0;
                }
                else {
                    if (j == endCol - 1) {              //whites have failed at finding the ending black
                        endCol = whiteStartedIndex + 1; //you should only be able to reach here
                    }
                    else {                              //still looking
                        tempWater++;
                    }
                }

            }
        }
    }
    return numWater;
}

