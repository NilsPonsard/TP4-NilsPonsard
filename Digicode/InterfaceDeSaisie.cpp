#include <iostream>
#include <iomanip>
#include <math.h>
#include "unistd.h"
#include "InterfaceDeSaisie.h"
#include "Chrono.h"
using namespace std;

void nsDigicode::InterfaceDeSaisie::statut(string s)
{
    cout << endl
         << "VERT" << setw(4) << leVoyantVert.getStatut()
         << setw(7) << "ROUGE" << setw(4) << leVoyantRouge.getStatut()
         << setw(24) << s << flush;
} //statut

nsDigicode::InterfaceDeSaisie::InterfaceDeSaisie(Chrono *c, int i, int chiffres) : ObjetTempo(c, i), nbChiffresAttendus(chiffres), leVoyantRouge(allume, rouge), leVoyantVert(eteint, vert)
{
}
int nsDigicode::InterfaceDeSaisie::saisirCode()
{
    int retour = 0;
    leVoyantVert.allumer();
    leVoyantRouge.eteindre();
    attente = true;
    leChrono->demarrer(this);
    for (size_t i = 0; i < nbChiffresAttendus; i++)
    {
        int k = -1;
        Clavier c = Clavier();
        while (k == -1 && attente)
        {
            statut();
            sleep(1);
            k = c.SaisirChiffre();
        }
        if (!attente)
        {
            leVoyantRouge.allumer();
            leVoyantVert.eteindre();
            return -1;
        }
        int touche = k - 48;
        retour += touche * std::pow(10, (nbChiffresAttendus - i - 1));
    }

    finTempo();
    leVoyantVert.eteindre();
    return retour;
}
