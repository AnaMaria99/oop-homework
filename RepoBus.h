//
// Created by ana-maria on 27.05.2019.
//
#include "Repo.h"
#include "Bus.h"
#include "Zona.h"
#ifndef UNTITLED_REPOBUS_H
#define UNTITLED_REPOBUS_H


class RepoBus: public Repo<Bus> {
private:
    vector <Bus> b;
public:
    RepoBus();
    RepoBus(string f);
    ~RepoBus();
    void addEl(Bus el) override;
    int getSize() override;
    Bus getElem(int pos) override;
    vector<Bus> getAll() override;
    void LoadFromFile();

};


#endif //UNTITLED_REPOBUS_H
