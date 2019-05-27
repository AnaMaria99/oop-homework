#include<iostream>
#include<vector>
#include "Zona.h"
class Bus
{
private:
  std::vector<Zona> traseu;
  int numarBus;
public:
  Bus();
  ~Bus();
  Bus(int nrBus,std::vector<Zona> v):numarBus(nrBus),traseu(v) {}
  void setNrBus(int newV) { numarBus=newV;}
  void setTraseu(std::vector<Zona> v) { traseu=v;}

  int getNrBus() { return numarBus;}
  std::vector<Zona> getTraseu() { return traseu; }

  Zona& getLocatieByName(std::string name)
  {
    for(std::vector<Zona>::iterator i=traseu.begin();i!=traseu.end();++i)
    {
      if(i->getNume()==name)
      {
        return *i; // TODO BUG
      }
    }
  }
};

Bus::Bus()
{
  numarBus=0;
}
Bus::~Bus()
{
  
}
