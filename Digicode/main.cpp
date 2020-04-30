#include <iostream>
#include "unistd.h"
#include "Alarme.h"
#include "Capteur.h"
using namespace std;

int main(void)
{
    nsDigicode::Alarme a = nsDigicode::Alarme();
    nsDigicode::Capteur c = nsDigicode::Capteur();
    while (true)
    {
        cout << c.Detecter() << endl;
        sleep(1);
    }

    return 0;
}
