#include <string>

#ifndef _VOYANT
#define _VOYANT

namespace nsDigicode
{
enum Couleur
{
    rouge,
    vert
};
enum Etat
{
    allume,
    eteint
};

class Voyant
{
private:
    Etat statut;
    Couleur couleur;

public:
    Voyant(const Etat &e, const Couleur &c);
    std::string getStatut();
    ~Voyant();
};

} // namespace nsDigicode

#endif