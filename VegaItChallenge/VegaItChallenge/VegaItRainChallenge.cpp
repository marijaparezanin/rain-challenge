#include <iostream>
#include <vector>
#include <map>
#include "RainCalculator.h"
#include "TestTables.h"
using namespace std;


int main()
{
    map<int, vector<vector<int>>> tablesAndResults = getResultsAndTables();
    map<int, vector<vector<int>>>::iterator it;
    int numWater = 0;

    for (it = tablesAndResults.begin(); it != tablesAndResults.end(); ++it) {
        cout << "Table:" << endl;
        printTable(it->second);
        cout << endl;

        numWater = calculateRain(it->second);
        cout << "Expected result: " << it->first <<endl;
        cout << "Calculated result: " << numWater << endl;

        cout << "\n\n";
    }
    return 0;
}

