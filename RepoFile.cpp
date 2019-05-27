//
// Created by ana-maria on 27.05.2019.
//

#include "RepoFile.h"

void RepoFile::citireBus() {
    ifstream fin;
    int nrBus;
    int pretZ;
    string z;
    vector<Zona> l;
    fin.open(this->filename);
    while (!fin.eof()) {
        fin >> nrBus;
        for (int i = 0; i < 8; i++) {
            fin>>pretZ;
            fin >> z;
            l.push_back(Zona(pretZ,z));
        }
        this->bus.push_back(Bus(nrBus, l));
        l.clear();
    }
}



void RepoFile::citireBilet() {
    ifstream fin;
    string n;
    int p;
    fin.open(this->filename);
    while (!fin.eof()) {
        fin >> p;
        fin >> n;
        this->bilete.push_back(Bilet(p,n));
    }
}

