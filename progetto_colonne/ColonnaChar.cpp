//
// Created by Elisa Messina on 02/06/2020.
//

#include "ColonnaChar.h"

ColonnaChar::ColonnaChar(const string &nomecolonna, bool notnull) {
    _nome_colonna = nomecolonna;
    _not_null = notnull;
}

void ColonnaChar::addVal(const string &valore_da_impostare) {
    char value_to_be_added = valore_da_impostare[0];
    _elementi_char.push_back(value_to_be_added);
}

string ColonnaChar::getElement(int index) {
    string str_to_return;
    str_to_return.push_back(_elementi_char[index]);
    return str_to_return;
}

void ColonnaChar::deleteVal(int index) {
    auto it=_elementi_char.begin();
    it+=index;
    _elementi_char.erase(it);
}

void ColonnaChar::updateVal(const string &val, int index) {   //testare, danger: probabile esplosione durante esecuzione
    char new_val = val[0];
    _elementi_char[new_val];
}