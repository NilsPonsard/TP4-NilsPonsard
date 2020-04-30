#include "kbhit.h"
#include "Capteur.h"

nsDigicode::Capteur::Capteur(/* args */)
{
}

nsDigicode::Capteur::~Capteur()
{
}

int nsDigicode::Capteur::Detecter()
{
    return _kbhit();
}