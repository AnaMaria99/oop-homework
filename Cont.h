#include<iostream>
#include "Bilet.h"
#include<vector>
#include "fstream"
using namespace std;
class Cont{
private:
  std::vector<Bilet> bilete;
  std::string username;
  std::string password;
public:
  Cont();
  ~Cont();
  void citireBilete();


};
Cont::Cont()
{
citireBilete();
}
Cont::~Cont()
{
  
}

void Cont::citireBilete() {
    ifstream fin;
    int p;
    string z;
    fin.open("bilete.txt");
    while(!fin.eof()){
        fin>>p;
        fin>>z;
        bilete.push_back(Bilet(p,z));
    }
}
