//
// Created by ana-maria on 19.05.2019.
//
#include "Bus.h"
#include "Bilet.h"
#include "Zona.h"
#include <fstream>
#include <vector>
using namespace std;
#ifndef UNTITLED_REPO_H
#define UNTITLED_REPO_H

template <class T>
class Repo {
protected:
    string filename;
public:
    Repo();
    Repo(vector <T> l);
    ~Repo();
    virtual void addEl(T el)=0;
    virtual int getSize()=0;
    virtual T getElem(int pos)=0;
    virtual vector <T> getAll()=0;
    virtual void LoadFromFile()=0;


};

template<class T>
Repo<T>::Repo() {}

template<class T>
Repo<T>::Repo(vector<T> l) {
this->v = l;
}

template<class T>
Repo<T>::~Repo() {

}


template<class T>
int Repo<T>::getSize() {
    return this->v.size();
}

template<class T>
T Repo<T>::getElem(int pos) {
    return this->v[pos];
}

template<class T>
vector<T> Repo<T>::getAll() {
    return this->v;
}

template<class T>
void Repo<T>::LoadFromFile(){
    ifstream fin;
    int p;
    string z;
    fin.open(this->filename);
    while(!fin.eof()){

    }
};
#endif //UNTITLED_REPO_H
