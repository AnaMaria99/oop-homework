#include<iostream>
#include "Ctrl.h"

class UI
{
private:
  Ctrl ctrl;
  Cont cont; // contul de bilete a userului
public:
  UI();
  ~UI();
  void chooseDestination();
  void chooseStart();
  bool checkBilet();
}
UI::UI()
{

}
UI::~UI()
{
  
}
