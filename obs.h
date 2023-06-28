#ifndef OBS_H
#define OBS_H

#include <vector>
#include <string>
#include "vorlesung.h"
#include "benutzer.h"
#include "dozentin.h"
#include "student.h"

class Vorlesung;
class Benutzer;

class Obs
{
public:
    Obs();
    ~Obs();
    bool einloggen();
    Vorlesung* findeVorlesung(std::string id);
private:
    Benutzer* findeBenutzer(std::string id);
    std::vector<Vorlesung*> alleVorlesungen{
                new Vorlesung(std::string("30.7122"),std::string("Programmieren 1"),32),
                new Vorlesung(std::string("30.7128"),std::string("Programmieren 2"),32),
                new Vorlesung(std::string("30.7220"),std::string("Betriebssysteme"),16),
                new Vorlesung(std::string("30.7106"),std::string("Rechnerarchitektur"),16),
                new Vorlesung(std::string("30.7118"),std::string("Algorithmen und Datenstrukturen"),32),
                new Vorlesung(std::string("30.7126"),std::string("IT-Sicherheit"),16),
                new Vorlesung(std::string("30.7108"),std::string("Technische Grundlagen der Informatik"),2),
                new Vorlesung(std::string("30.7120"),std::string("Mathematik für Informatiker 1"),8),
                new Vorlesung(std::string("30.7124"),std::string("Mathematik für Informatiker 2"),8)
    };
    std::vector<Benutzer*> alleBenutzer{
//                new Dozentin("D1000", "Ayla", "Ambrosio",this),
//                new Dozentin("D1001", "Paul", "Panter", this),
//                new Dozentin("D1002", "Saskia", "Wegehenkel", this),
//                new Dozentin("D1003", "Esra", "Topas", this),
//                new Dozentin("D1004", "Arnim", "Malcherek",this),
//                new Student("1000000", "Johanna", "Remus",this),
//                new Student("1000001", "Kai", "Lode", this),
//                new Student("1000002", "Jeremy", "Moussa", this),
//                new Student("1000003", "Sarah", "Orth", this),
//                new Student("1000004","Miriam","Klepper",this),
//                new Student("1000005","Tuan","Quang",this),
//                new Student("1000006","Tobias","Thielen",this),
//                new Student("1000007","Christian","Vikulov",this),
//                new Student("1000008","Alexandra","Weber",this),
//                new Student("1000009","Adrian","Fischer",this)
    };
    Benutzer* angemeldeterBenutzer = nullptr;
};

#endif // OBS_H
