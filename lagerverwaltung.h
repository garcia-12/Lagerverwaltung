#ifndef LAGERVERWALTUNG_H
#define LAGERVERWALTUNG_H
#include "lagerplatz.h"
#include <vector>
#include <random>
#include <iostream>

using namespace std;

class Lagerverwaltung
{
public:
    Lagerverwaltung();
    ~Lagerverwaltung();
    void lagerErweiterung(double maxGewicht);
    bool einlagernNachId(int id, const Artikel& artikel);
    bool einlagern(const Artikel& artikel);
    void inventur() const;

private:
    std::vector<Lagerplatz*> lagerplaetzen;
};

#endif // LAGERVERWALTUNG_H
