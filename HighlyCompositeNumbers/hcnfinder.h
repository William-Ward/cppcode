#ifndef HCNFINDER_H
#define HCNFINDER_H
#include <iostream>
#include <list>
#include <map>

using namespace std;

class Hcnfinder
{
    private:
        list<int> HCNlist;
        int maxFactor = 0;

        bool check(int); 
    public:
        Hcnfinder();
        list<int> find(int);
        int findFactors(int); 
};

#endif
