#include <iostream>
#include <iomanip>
#include <cmath>
#include "ModulesKrutikov.h"

using namespace std;

int main()
{
    double input[10][3] = {2,    5,    3,
                           1,    4,    6,
                           6,    1,    2,
                           3,    2,    1,
                           -3,   3,    0,
                           -5,   3,    4,
                           1,    4,    -2,
                           3,    8,    2,
                           2,    5,    6,
                           5,    9,    3};
    double result[10] = {35.629685, 22.920217, 22.982051,  9.406917, 3.553586,
                         6.358171, 17.263363, 377.797846, 40.426102, 908.412543};


    cout << "\t\tTestDriver of ModulesKrutikov.a" << endl;
    for (int i = 0; i < 10; i++) {
        cout << resetiosflags(ios::fixed) << "TC_" << setfill('0') << setw(2) << i+1 << ":|" << setfill(' ');
        cout << "x = " << setw(5) << left << input[i][0];
        cout << "y = " << setw(5) << left << input[i][1];
        cout << "z = " << setw(5) << left << input[i][2];
        cout << fixed << "| - result: " << setw(10) << s_calculation(input[i][0], input[i][1], input[i][2]);
        cout << left << " - " << ((round(s_calculation(input[i][0], input[i][1], input[i][2])*1000000)/1000000.0 == result[i]) ? "passed" : "failed") << endl;
    }
    return 0;
}
