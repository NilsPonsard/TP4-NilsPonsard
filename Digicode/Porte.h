#include "ObjetTempo.h"
#ifndef _PORTE
#define _PORTE

namespace nsDigicode
{

class Porte : public ObjetTempo
{
private:
    bool fermer();

public:
    Porte(Chrono *, int);
    bool ouvrir();
};
} // namespace nsDigicode

#endif