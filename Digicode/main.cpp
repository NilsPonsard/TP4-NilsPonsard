#include <iostream>
#include "Alarme.h"
using namespace std;

int main(void)
{
    nsDigicode::Alarme a = nsDigicode::Alarme();
    a.declencher();
    return 0;
}
