#include <iostream>
#include "unistd.h"
#include "Alarme.h"
#include "Capteur.h"
#include "Clavier.h"
#include "Voyant.h"
#include "Systeme.h"
using namespace std;

int main(void)
{
    nsDigicode::Voyant v = nsDigicode::Voyant(nsDigicode::allume, nsDigicode::vert);
    nsDigicode::Alarme a = nsDigicode::Alarme();
    nsDigicode::Capteur c = nsDigicode::Capteur();
    nsDigicode::Clavier cl = nsDigicode::Clavier();
    nsDigicode::BD base_donnees = nsDigicode::BD();

    nsDigicode::Archivage archive = nsDigicode::Archivage();

    nsDigicode::Systeme systeme = nsDigicode::Systeme(&base_donnees, &archive);
    return 0;
}
