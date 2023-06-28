#ifndef BENUTZER_H
#define BENUTZER_H

#include <iostream>
#include <vector>
#include "obs.h"

class Obs;

class Benutzer
{
protected:
    std::string id;
    std::string vorname;
    std::string nachname;
    Obs* obs ;

public:
    Benutzer(std::string id_, std::string vorname_, std::string nachname_, Obs* obs_):
        id(id_), vorname(vorname_), nachname(nachname_), obs(obs_){}
    virtual void benutzerDialog() = 0;
    virtual ~Benutzer() = default;

};

#endif // BENUTZER_H
