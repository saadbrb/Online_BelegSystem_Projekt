#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include "benutzer.h"

class Student : public Benutzer
{
public:
    Student(std::string id_, std::string vorname_, std::string nachname_, Obs* obs_):
        Benutzer(id_, vorname_, nachname_, obs_){}

    void benutzerDialog() override;
    bool belegen(std::string name_);
    void belegungenAnzeigen();
};

#endif // STUDENT_H
