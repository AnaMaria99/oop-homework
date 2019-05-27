//
// Created by ana-maria on 19.05.2019.
//
#include "Zona.h"
#include "Repo.h"
#include "Bilet.h"
#ifndef UNTITLED_TICKETREPO_H
#define UNTITLED_TICKETREPO_H


class RepoBilet :public Repo<Bilet>{
private:
    vector <Bilet> v;
public:
    RepoBilet(){};
    RepoBilet(vector<Bilet> l){this->v = l;};
    void addEl(Bilet el)override;
    int getSize()override;
    Bilet getElem(int pos)override;
    vector<Bilet> getAll()override;
    void LoadFromFile();
};




#endif //UNTITLED_TICKETREPO_H
