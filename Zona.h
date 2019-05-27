#include<iostream>


#ifndef UNTITLED_ZONA_H
#define UNTITLED_ZONA_H


class Zona
{
private:
  std::string nume;
  int pret;
public:
  Zona();
  ~Zona();
  Zona(int pret,std::string newV):pret(pret),nume(newV) {}
  int getPret() { return this->pret;}
  std::string getNume() { return this->nume;}
  void setPret(int newV) { pret=newV;}
  void setNume(std::string newV) { nume=newV;}
};

Zona::Zona()
{
  pret=0;
  nume="";
}
Zona::~Zona()
{

}

#endif //UNTITLED_ZONA_H