//
// Created by ana-maria on 27.05.2019.
//

#include "RepoBus.h"

RepoBus::RepoBus() {

}

RepoBus::RepoBus(string f) {

}

RepoBus::~RepoBus() {

}

void RepoBus::addEl(Bus el) {
    this->b.push_back(el);
}

int RepoBus::getSize() {
    return this->b.size();
}

Bus RepoBus::getElem(int pos) {
    return this->b[pos];
}

vector<Bus> RepoBus::getAll() {
    return this->b;
}

void RepoBus::LoadFromFile() {
    ifstream fin;
    int p;
    string z;
    vector <string> l;
    fin.open(this->filename);
    while (!fin.eof()) {
        fin>>p;
        for(int i =0;i<8;i++){
            fin>>z;
            l.push_back(z);
        }
        Bus(p,l);


    }
}
