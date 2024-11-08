#include "lagerplatz.h"
int Lagerplatz::ID = 0;


Lagerplatz::Lagerplatz(double _max_gewicht)
    :max_gewicht(_max_gewicht)
{
    ID++;
}

double Lagerplatz::get_gewicht_stand()
{
    double Summe = 0;
    for(unsigned int i = 0; i < artikels.size(); i++){
        Summe = Summe + artikels[i].getGewicht();
    }
    return Summe;
}

double Lagerplatz::get_max_gewicht() const
{
    return max_gewicht;
}

std::vector<Artikel> Lagerplatz::get_artikel() const
{
    return artikels;
}

//int Lagerplatz::getAnzahl()
//{
//    int n = 0;
//    for(auto art: artikels){
//        n = n + art.
//    }
//}

int Lagerplatz::getID() const
{
    return ID;
}

bool Lagerplatz::einlagern(/*const*/ const Artikel &artikel)
{
    if(artikel.getGewicht() + artikel.get_anzahl_einheiten() <= max_gewicht and !artikel.ist_entflammbar()){
        artikels.push_back(artikel);
        return true;
    }
    return false;
}

//void Lagerplatz::set_artikel(const Artikel &artikel)
//{
//    artikels.push_back(artikel);
//}
