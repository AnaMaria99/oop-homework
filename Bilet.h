#include<iostream>
#include "Zona.h"
class Bilet
{
private:
  int pret;
  Zona zona;
public:
  Bilet();
  ~Bilet();
  Bilet(int pret,std::string numeZona):pret(pret)
  {
    zona.setNume(numeZona);
    zona.setPret(pret);
  }
  void setPret(int newV) { pret=newV; }
  int getPret(){ return this->pret; }
  Zona& getZona() {return this->zona;} // TODO BUG
};

Bilet::Bilet()
{
  pret=0;
  zona.setNume("");
  zona.setPret(0);
}
Bilet::~Bilet()
{

}
