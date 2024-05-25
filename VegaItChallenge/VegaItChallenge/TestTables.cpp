#include<iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<int>> example1 =
{
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 1, 0, 0, 0, 1 },
    { 1, 0, 0, 1, 1, 0, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1 }
};

vector<vector<int>> example2 =
{
    { 1, 0, 0, 0, 0, 0, 0, 1 },
    { 1, 0, 0, 1, 0, 0, 0, 1 },
    { 1, 0, 1, 1, 0, 0, 1, 1 },
    { 1, 1, 1, 1, 0, 0, 1, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1 }
};


vector<vector<int>> table1 =
{
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 1 },
    { 1, 1, 1, 1, 1, 1, 1, 1 }
};


vector<vector<int>> table2 =
{
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 1, 1, 0, 0, 0, 1, 0 },
    { 1, 0, 0, 1, 0, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 1, 1 }
};


vector<vector<int>> table3 =
{
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 1, 0, 0 },
    { 1, 0, 0, 0, 1, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 0, 0 }
};


vector<vector<int>> table4 =
{
    { 0, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 1, 0, 0, 1, 0, 0 },
    { 0, 0, 1, 0, 0, 1, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 0, 0 }
};


vector<vector<int>> table5 =
{
    { 1, 0, 0, 0, 0, 1, 0, 0 },
    { 1, 0, 0, 0, 1, 0, 0, 0 },
    { 0, 0, 0, 1, 0, 0, 0, 0 },
    { 1, 0, 0, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 0, 0 }
};

vector<vector<int>> table6 =
{
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 1, 0, 1 },
    { 1, 0, 0, 1, 0, 0, 0, 0 },
    { 1, 1, 1, 1, 1, 1, 0, 0 }
};


//Expected result, table
std::map<int, vector<vector<int>> > testTables = {
    {8, example1},
    {16, example2},
    {6, table1},
    {6, table2},
    {11, table3},
    {4, table4},
    {2, table5},
    {2, table6}
};




std::map<int, vector<vector<int>> > getResultsAndTables() {
    return testTables;
}


void printTable(vector<vector<int>> table) {
    for (const auto& row : table) {
        for (int val : row) {
            if (val == 0) {
                std::cout << "O" << " ";
            }
            else {
                std::cout << "X" << " ";
            }
        }
        std::cout << std::endl;
    }


}