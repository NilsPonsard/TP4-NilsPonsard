#include <iostream>
#include "unistd.h"
#include "Porte.h"
#include "Capteur.h"

nsDigicode::Porte::Porte(Chrono *c, int i) : nsDigicode::ObjetTempo(c, i)
{
}

bool nsDigicode::Porte::ouvrir()
{
    attente = true;
    leChrono->demarrer(this);
    int k = 0;
    Capteur c = Capteur();

    while (attente && k == 0)
    {
        k = c.Detecter();
        std::cout << k;
        std::cout.flush();
        sleep(1);
    }
    if (k != 0)
    {
        return fermer();
    }
    return false;
}
bool nsDigicode::Porte::fermer()
{
    int k = 0;
    Capteur c = Capteur();
    while (attente && k == 0)
    {
        std::cout << k;
        k = c.Detecter();
        sleep(1);
    }
    if (k != 0)
    {
        finTempo();
        return true;
    }
    return false;
}