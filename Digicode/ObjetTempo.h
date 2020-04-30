#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode
{

class ObjetTempo
{
protected:
    bool attente;
    Chrono *leChrono;

private:
    int delai;

public:
    ObjetTempo(Chrono *c, const int &);
    ~ObjetTempo();

    Chrono *getChrono();
    void finTempo();
    int getDelai();
};

} // namespace nsDigicode

#endif /* _OBJETTEMPO */
