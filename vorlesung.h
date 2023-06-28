#ifndef VORLESUNG_H
#define VORLESUNG_H

#include <iostream>
#include <vector>
#include "dozentin.h"
#include "student.h"

class Dozentin;
class Student;

class Vorlesung
{
private:
    std::string belegNummer;
    std::string bezeichnung;
    Dozentin* angebotenVon;
    std::vector <Student*> begeltVon;
    unsigned int kapatizaet;


public:
    Vorlesung(std::string belegNummer_, std::string bezeichnung_, unsigned int kapatizaet_):
        belegNummer(belegNummer_), bezeichnung(bezeichnung_), kapatizaet(kapatizaet_){}
    bool belegen(Student* student_);
};

#endif // VORLESUNG_H
