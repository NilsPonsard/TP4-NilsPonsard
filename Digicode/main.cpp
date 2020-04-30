#include <iostream>
#include "unistd.h"
#include "Alarme.h"
#include "Capteur.h"
#include "Clavier.h"
using namespace std;

int main(void)
{
    nsDigicode::Alarme a = nsDigicode::Alarme();
    nsDigicode::Capteur c = nsDigicode::Capteur();
    nsDigicode::Clavier cl = nsDigicode::Clavier();
    while (true)
    {
        cout << cl.SaisirChiffre() << endl;
        sleep(1);
    }

    return 0;
}
