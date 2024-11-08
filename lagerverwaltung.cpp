#include "lagerverwaltung.h"

Lagerverwaltung::Lagerverwaltung()
{

}

Lagerverwaltung::~Lagerverwaltung()
{
    for(unsigned int i = 0; i < lagerplaetzen.size(); i++)
        delete lagerplaetzen[i];
    lagerplaetzen.clear();

}

void Lagerverwaltung::lagerErweiterung(double maxGewicht)
{
    Lagerplatz* neu_lagerplatz = new Lagerplatz{maxGewicht};
    lagerplaetzen.push_back(neu_lagerplatz);
}

bool Lagerverwaltung::einlagernNachId(int id, const Artikel &artikel)
{
    for(const auto& lager: lagerplaetzen){
        if(lager->getID() == id){
            if(!lager->einlagern(artikel))
                return false;
            else{
                lager->einlagern(artikel);
                break;
            }
        }
    }

    return true;

}

bool Lagerverwaltung::einlagern(const Artikel &artikel)
{
//    Lagerverwaltung Lagerver;
    for(const auto& lager: lagerplaetzen ){
        for( auto& artik: lager->get_artikel()){
            if(artik.get_artikelnummer() == artikel.get_artikelnummer()){
                artik.upgrade_anzahl_einheiten(1);
                return true;
            }
        }
    }

    for(const auto& lager: lagerplaetzen){
        if(lager->get_gewicht_stand() + artikel.getGewicht() <= lager->get_max_gewicht())
            lager->einlagern(artikel);
    }

    return false;


}

void Lagerverwaltung::inventur() const
{
    cout << "Lagerplaetzr: " << lagerplaetzen.size() <<endl;
    double gesamtgewicht = 0, gewichtKapazitaet = 0;
    for(const auto& lager: lagerplaetzen){
        gesamtgewicht += lager->get_gewicht_stand();
        gewichtKapazitaet += lager->get_max_gewicht();
    }
    cout << "Gesamtgewicht: "<< gesamtgewicht<<endl;
    cout << "GewichtKapazitaet: "<< gewichtKapazitaet <<endl;
    cout << "--------------------------------------------------"<<endl<<endl;

    for(const auto& lager: lagerplaetzen){
        cout << "ID: " << lager->getID() <<endl;
        cout <<"Noch verfuegbare Lagerkapazitaet: " << lager->get_max_gewicht() - lager->get_gewicht_stand() <<endl;
        for(const auto& artikel: lager->get_artikel()){
            cout << "Artikelnummer: "<< artikel.get_artikelnummer() <<endl;
            cout << "ArtikelBezeichnung: " << artikel.get_bezeichnung() <<endl;
            cout << "Anzahl von allen eingelageerten Artikel: " << lager->get_artikel().size() <<endl;

            cout<< "-------"<<endl;
        }

        cout<< "-----------------------------"<<endl;
    }

}
