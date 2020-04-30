#include <string>
#include "ObjetTempo.h"
#include "Voyant.h"
#include "Clavier.h"
#ifndef _INTERFACE
#define _INTERFACE

namespace nsDigicode
{

class InterfaceDeSaisie : public ObjetTempo
{
private:
	int nbChiffresAttendus;
	void statut(std::string = "\n");
	Clavier clavier;
	Voyant leVoyantVert;
	Voyant leVoyantRouge;

public:
	InterfaceDeSaisie(Chrono *, int, int);
	int saisirCode();

}; // InterfaceDeSaisie

} // namespace nsDigicode

#endif /* _INTERFACE */
