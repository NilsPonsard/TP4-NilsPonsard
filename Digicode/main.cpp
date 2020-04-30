#include <iostream>
#include "unistd.h"
#include "Alarme.h"
#include "Capteur.h"
#include "Clavier.h"
#include "Voyant.h"
using namespace std;

int main(void)
{
    nsDigicode::Voyant v = nsDigicode::Voyant(nsDigicode::allume, nsDigicode::vert);
    nsDigicode::Alarme a = nsDigicode::Alarme();
    nsDigicode::Capteur c = nsDigicode::Capteur();
    nsDigicode::Clavier cl = nsDigicode::Clavier();
    cout << v.getStatut() << endl;

    return 0;
}
