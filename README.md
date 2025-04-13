```markdown
# 🏬 Lagerverwaltung – Intelligente Lagerlogik in C++

In diesem Projekt wird das Konzept der Lagerverwaltung elegant und objektorientiert umgesetzt.  
Ob einfache Artikel oder Gefahrgut – hier wird alles seinen Platz finden.  
Ein C++-Projekt, das Ordnung schafft, wo Chaos herrscht 📦🧠

## 🚀 Was macht dieses Projekt?

Dieses Programm bildet ein modulares System zur Verwaltung eines Lagers mit verschiedenen Lagerplätzen, darunter auch spezielle Gefahrgutlager.  
Es nutzt Vererbung, saubere Klassenstruktur und lässt sich wunderbar erweitern – ein solides Fundament für jede Art von Inventarlogik.

## 🧠 Features

- Verwaltung von Artikeln und deren Lagerorten  
- Unterscheidung zwischen Standardlager und Gefahrgutlager  
- Erweiterbare Objektstruktur für weitere Lagertypen  
- Saubere Trennung zwischen Logik und Datenstruktur

## 🛠️ Projektstruktur

```
Lagerverwaltung/
├── artikel.cpp/.h                # Definition eines Artikels
├── lagerverwaltung.cpp/.h       # Hauptverwaltungsklasse
├── lagerplatz.cpp/.h            # Allgemeiner Lagerplatz
├── gefahrgutlagerplatz.cpp/.h   # Speziallager für gefährliche Güter
├── CMakeLists.txt               # Build-Konfiguration mit CMake
```

## 🧪 Kompilierung & Ausführung

### Voraussetzungen

- C++ Compiler (`g++`, `clang++`, etc.)  
- [CMake](https://cmake.org/) installiert

### Schritte

cd Lagerverwaltung
mkdir build && cd build
cmake ..
make
./Lagerverwaltung  # Name des ausführbaren Programms

## 👨‍🎓 Über mich

Ich bin Informatikstudent mit einem Faible für sauberen Code, strukturierte Systeme und Zukunftsvisionen.  
C++ ist nicht nur eine Sprache, sondern ein Werkzeug für präzises Denken – und dieses Projekt ist ein kleiner Beweis dafür 🛠️✨

## 🔮 Erweiterungsideen

- GUI zur visuellen Darstellung des Lagers  
- Integration von QR-/Barcodescannern  
- Export der Lagerdaten in CSV oder Datenbanken  
- Automatische Warnung bei Gefahrgutüberschreitung

  
„Wo der Code Ordnung schafft, kann das Chaos nicht lange überleben.“
