#include "obs.h"

Obs::Obs()
{
}

Obs::~Obs(){
}

bool Obs::einloggen(){

    return true;
}

Benutzer* Obs::findeBenutzer(std::string id)
{
    return nullptr;
}

Vorlesung* Obs::findeVorlesung(std::string belegNummer)
{
    return nullptr;
}

