cmake_minimum_required(VERSION 3.5)

project(Lagerverwaltung LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lagerverwaltung main.cpp
    artikel.h artikel.cpp
    lagerplatz.h lagerplatz.cpp
    lagerverwaltung.h lagerverwaltung.cpp
    gefahrgutlagerplatz.h gefahrgutlagerplatz.cpp)

include(GNUInstallDirs)
install(TARGETS Lagerverwaltung
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
