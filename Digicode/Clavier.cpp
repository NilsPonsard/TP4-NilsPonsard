#include "kbhit.h"
#include "Clavier.h"
nsDigicode::Clavier::Clavier(/* args */)
{
}

nsDigicode::Clavier::~Clavier()
{
}

int nsDigicode ::Clavier::SaisirChiffre()
{
    int k = _kbhit();
    if (k == 0)
    {
        return -1;
    }
    else
    {
        return k;
    }
}
