#ifndef DOZENTIN_H
#define DOZENTIN_H
#include "obs.h"
#include "benutzer.h"
#include "vorlesung.h"
#include <iostream>
#include <vector>


class Vorlesung;

class Benutzer;


class Dozentin : public Benutzer
{
private:
    std::vector <Vorlesung*> meineVorlesungen;


public:
    Dozentin(std::string id_, std::string vorname_, std::string nachname_, Obs* obs_):
        Benutzer(id_, vorname_, nachname_, obs_){}
    void benutzerDialog() override;
    bool vorlesungAnbieten(std::string name_);
    void belegungenZeigen();
};

#endif // DOZENTIN_H
