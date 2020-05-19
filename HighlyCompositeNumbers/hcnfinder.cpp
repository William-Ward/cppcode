#include "hcnfinder.h"

Hcnfinder::Hcnfinder() {}

// find factors, save maxFactor
list<int> Hcnfinder::find(int num) // {{{
{
    for(int i = 1; i <= num; i++)
        if(check(i))
            HCNlist.push_back(i);
    return HCNlist; 
}
// }}}

bool Hcnfinder::check(int num) // {{{
{
    int numFactors = findFactors(num);
    if(numFactors <= maxFactor)
        return false;
    else
        maxFactor = numFactors; 

    return true; 
}
// }}}

int Hcnfinder::findFactors(int num) // {{{
{
    int factors = 0;
    int i = 1;

    for(i = 1; i <= num/2; i++)
        if(num%i == 0)
            factors++;

    return ++factors;
}
// }}} 
