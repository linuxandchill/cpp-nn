#ifndef _NEURON_HPP_
#define _NEURON_HPP_

#include <iostream>
#include <cmath>

using namespace std; 

class Neuron{
  public:
    //constructor definition
    Neuron(double val); 

    void activate();

    void derive(); 

  //getters
    double getVal(){ return this->val; }
    double getActivatedVal(){ return this->activatedVal; }
    double getDerivedVal(){return this->derivedVal;}

  private:
    double val;
    double activatedVal;
    double derivedVal; 
};


#endif
