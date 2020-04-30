#include "Chrono.h"

#include "ObjetTempo.h"

nsDigicode::ObjetTempo::ObjetTempo(nsDigicode::Chrono *ch, const int &i) : leChrono(ch), delai(i)
{
    attente = false;
}
nsDigicode::ObjetTempo::~ObjetTempo()
{
}

void nsDigicode::ObjetTempo::finTempo()
{
    attente = false;
}
nsDigicode::Chrono *nsDigicode::ObjetTempo::getChrono()
{
    return leChrono;
}
int nsDigicode::ObjetTempo::getDelai()
{
    return delai;
}