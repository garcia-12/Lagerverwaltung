#include "gefahrgutlagerplatz.h"

GefahrgutLagerplatz::GefahrgutLagerplatz(double _max_gewicht)
    : Lagerplatz(_max_gewicht)
{

}

bool GefahrgutLagerplatz::einlagern(const Artikel &artikel)
{
    bool found = false;
    for(const auto& a: artikels){
        if(a.ist_entflammbar()){
            found = true;
            break;
        }
    }
    if(found == false){
        if(artikel.getGewicht() + artikel.get_anzahl_einheiten() <= max_gewicht and artikel.ist_entflammbar()){
            artikels.push_back(artikel);
            return true;
        }
    }
    return false;
//    if(artikel.getGewicht() + artikel.get_anzahl_einheiten() <= max_gewicht and !artikel.ist_entflammbar()){
//        artikels.push_back(artikel);
//        return true;
//    }
//    return false;
}
