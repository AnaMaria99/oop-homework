//
// Created by ana-maria on 19.05.2019.
//

#include "RepoBilet.h"



void RepoBilet::LoadFromFile() {
    ifstream fin;
    int p;
    string z;
    fin.open(this->filename);
    while(!fin.eof()){
        fin>>p;
        fin>>z;
        addEl(Bilet(p,z));
    }
}

void RepoBilet::addEl(Bilet el) {
    this->v.push_back(el);
}

int RepoBilet::getSize() {
    return this->v.size();
}

Bilet RepoBilet::getElem(int pos) {
    return this->v[pos];
}

vector<Bilet> RepoBilet::getAll() {
    return this->v;
}