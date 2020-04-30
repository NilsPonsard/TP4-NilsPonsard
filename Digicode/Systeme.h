#include "Chrono.h"
#include "ObjetTempo.h"
#include "InterfaceDeSaisie.h"
#include "BD.h"
#include "Archivage.h"
#include "Alarme.h"
#include "Porte.h"

#ifndef _SYSTEME
#define _SYSTEME

namespace nsDigicode
{
class Systeme
{
private:
    /* data */
public:
    Systeme(nsDigicode::BD *, nsDigicode::Archivage *);
};

} // namespace nsDigicode

#endif