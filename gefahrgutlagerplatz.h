#ifndef GEFAHRGUTLAGERPLATZ_H
#define GEFAHRGUTLAGERPLATZ_H
#include "lagerplatz.h"

class GefahrgutLagerplatz : public Lagerplatz
{
public:
    GefahrgutLagerplatz(double _max_gewicht);
    bool einlagern(const Artikel &artikel) override;
private:
    bool entflammbar;
};

#endif // GEFAHRGUTLAGERPLATZ_H
