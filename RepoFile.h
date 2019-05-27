//
// Created by ana-maria on 27.05.2019.
//
#include "Repo.h"
#ifndef UNTITLED_REPOFILE_H
#define UNTITLED_REPOFILE_H


class RepoFile:public Repo<Bus> {
private:
    vector <Bus> bus;
    vector <Bilet> bilete;
public:
    void citireBus();
    void citireBilet();
    void getEl(int pos);
};




#endif //UNTITLED_REPOFILE_H
