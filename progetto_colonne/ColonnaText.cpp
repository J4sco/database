//
// Created by Elisa Messina on 01/06/2020.
//

#include "ColonnaText.h"

ColonnaText::ColonnaText(const string &nomecolonna, bool notnull) {
    _nome_colonna = nomecolonna;
    _not_null = notnull;
}

void ColonnaText::setVal(const string &valore_da_impostare) {
    _elementi_di_testo.push_back(valore_da_impostare);
}

string ColonnaText::getElement(int index){
    return _elementi_di_testo[index];
}

void ColonnaText::deleteVal(int index) {
    auto it=_elementi_di_testo.begin();
    it+=index;
    _elementi_di_testo.erase(it);
}