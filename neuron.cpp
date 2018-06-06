#include "./neuron.hpp" 

//implement constructor
Neuron::Neuron(double val){
  this->val = val;
  activate();
  derive();
}

//implement activate function
//fast sigmoid function
void Neuron::activate(){
  this->activatedVal = this->val / (1 + abs(this->val)); 
}

//implement derive function
void Neuron::derive(){
  this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}
