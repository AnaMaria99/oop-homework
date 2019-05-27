#include<iostream>
#include "Repo.h"



class Ctrl
{
private:
  Repo repo;
public:
  Ctrl();
  ~Ctrl();
  void filterByNrBus();
  void showAll();
  void showBestRoutes();
  template <class T>
  Repo <T> getRepo() { return repo;} //MAYBE BUG


Ctrl::Ctrl()
{

}
Ctrl::~Ctrl()
{
  
}
