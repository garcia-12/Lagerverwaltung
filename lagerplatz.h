#ifndef LAGERPLATZ_H
#define LAGERPLATZ_H

#include "artikel.h"
#include <vector>
#include <iostream>

class Lagerplatz
{
public:
    Lagerplatz(double _max_gewicht);
    virtual bool einlagern(const Artikel &artikel);
//    void set_artikel(const Artikel& artikel);
    double get_gewicht_stand();
    double get_max_gewicht() const;
    std::vector<Artikel> get_artikel() const;
//    int getAnzahl();
    int getID() const;
private:
    static int ID;
    std::vector<Artikel> artikels;
    double max_gewicht;

};

#endif // LAGERPLATZ_H
