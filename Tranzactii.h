//
// Created by alex on 30.08.2023.
//

#ifndef PROIECT_SISTEMBANCAR_TRANZACTII_H
#define PROIECT_SISTEMBANCAR_TRANZACTII_H

# include <string>
# include "Cont.h"

class Tranzactii{
private:
    std::string ID;
    int valoare;
    std::string descriere;
    Tranzactii(std::string desc, int val);
public:
    friend Tranzactii creareTranzactie(std::string desc, int val);

    [[maybe_unused]] std::string getDesc();
    [[maybe_unused]] int getValoare();
    [[maybe_unused]]std::string getID();
    [[maybe_unused]]void depunere(int val,Cont cnt);
    [[maybe_unused]]void transfer(Cont cont1, Cont cont2, int suma);
    [[maybe_unused]]void retragere(int val,Cont cnt);
    [[maybe_unused]]void vizualizareDetalii();
};


#endif //PROIECT_SISTEMBANCAR_TRANZACTII_H
