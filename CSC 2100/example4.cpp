#include <string>
#include <iostream>
using namespace std;

enum Car {Porsche, BMW, Jaguar, Ferrari};

int main () {
 for (Car c=Porsche; c<=Ferrari; c=static_cast<Car>(c+1))
 {
   switch(c)
   {
      case Porsche:
      cout <<" The car is Porsche and its color is red\n";
      break;
      case BMW:
      cout <<" The car is BMW and its color is blue\n";
      break;
      case Jaguar:
      cout <<" The car is Jaguar and its color is green\n";
      break;
      case Ferrari:
      cout <<" The car is Ferrari and its color is black\n";
      break;
   
   }
 }
}