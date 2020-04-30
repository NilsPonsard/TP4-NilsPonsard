#include "Voyant.h"

nsDigicode::Voyant::Voyant(const Etat &e, const Couleur &c) : statut(e), couleur(c)
{
}

nsDigicode::Voyant::~Voyant()
{
}

std::string nsDigicode::Voyant::getStatut()
{
    if (statut == nsDigicode::Etat::allume)
    {
        return "ON";
    }
    else
    {
        return "OFF";
    }
}
