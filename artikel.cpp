#include "artikel.h"


Artikel::Artikel(int _artikelnummer, std::string _bezeichnung, int _anzahl_einheiten, double _gewicht, bool _entflammbar)
    :artikelnummer(_artikelnummer), bezeichnung(_bezeichnung), anzahl_einheiten(_anzahl_einheiten), gewicht_einheit(_gewicht), entflammbar(_entflammbar)
{

}

double Artikel::getGewicht() const
{
    return gewicht_einheit*anzahl_einheiten;
}

double Artikel::get_gewicht_einheit() const
{
    return gewicht_einheit;
}

int Artikel::get_artikelnummer() const
{
    return artikelnummer;
}

int Artikel::get_anzahl_einheiten() const
{
    return anzahl_einheiten;
}

std::string Artikel::get_bezeichnung() const
{
    return bezeichnung;
}

void Artikel::upgrade_anzahl_einheiten(int n)
{
    anzahl_einheiten =+ n;
}

bool Artikel::ist_entflammbar() const
{
    return entflammbar;
}

void Artikel::set_entflammbar(bool value)
{
    entflammbar = value;
}
