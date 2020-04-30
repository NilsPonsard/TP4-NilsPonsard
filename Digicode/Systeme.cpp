#include <iostream>
#include "Systeme.h"
nsDigicode::Systeme::Systeme(nsDigicode::BD *bd, nsDigicode::Archivage *archive)
{
    Chrono chrono = nsDigicode::Chrono();
    nsDigicode::InterfaceDeSaisie interface = InterfaceDeSaisie(&chrono, 40, 4);
    nsDigicode::Porte porte = nsDigicode::Porte(&chrono, 40);

    int code = 0;
    while (true)
    {

        code = interface.saisirCode();
        if (code != -1)
        {
            if (bd->verifier(code))
            {
                std::cout << "overture de la porte" << std::endl;
                bool status = porte.ouvrir();
                if (!status)
                {
                    Alarme().declencher();
                }
                std::cout << "porte fermée" << std::endl;

            }
            archive->archiver(code);
        }
    }
}
