#include <iostream>
#include <iomanip>
#include "hcnfinder.h"

using namespace std;

int main()
{
    int num;
    cout << "Enter num to find Highly composite numbers: ";
    cin >> num;
    Hcnfinder hcn;
    list<int> list = hcn.find(num);

    for(int x : list)
        cout << right << setw(10) << x << " " << hcn.findFactors(x) << "\n";
    return 0;
}
