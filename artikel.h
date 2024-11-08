#ifndef ARTIKEL_H
#define ARTIKEL_H

#include <string>

class Artikel
{
public:
    Artikel(int _artikelnummer, std::string _bezeichnung, int _anzahl_einheiten, double _gewicht, bool _entflammbar);
    double getGewicht() const;
    double get_gewicht_einheit() const;
    int get_artikelnummer() const;
    int get_anzahl_einheiten() const;
    std::string get_bezeichnung() const;
    void upgrade_anzahl_einheiten(int n);
    bool ist_entflammbar() const;
    void set_entflammbar(bool value);
private:
    int artikelnummer, anzahl_einheiten;
    std::string bezeichnung;
    double gewicht_einheit;
    bool entflammbar;
};

#endif // ARTIKEL_H
