#include <iostream> 
#include "./neuron.hpp"
#include "./neuron.cpp"

using namespace std;

int main(){
  /*
  Neuron *my_neuron = new Neuron(0.8); 
  cout << my_neuron->getVal()<< endl;
  cout << my_neuron->getActivatedVal() << endl;
  cout << my_neuron->getDerivedVal()<< endl;
  */

  Neuron my_neuron{0.7}; 
  cout << my_neuron.getVal()<< endl;
  cout << my_neuron.getActivatedVal() << endl;
  cout << my_neuron.getDerivedVal()<< endl;
  //Neuron *n = new Neuron(0.9); 
}
