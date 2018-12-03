#include "CustomItem.h"
#include <math.h>
#include <map>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <iomanip>

CustomItem::CustomItem(std::string size) : IceCreamItem::IceCreamItem(size){
  this->size = size;
  if(size == "small")
    price = 3.00;
  else if(size == "medium")
    price = 5.00;
  else
    price = 6.50;
}

CustomItem::~CustomItem(){

}

std::string CustomItem::composeItem(){
  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << getPrice();
  std::string res = "Custom Size: " + size + "\n" + "Toppings: " + "\n";
  for(std::map<std::string, int>::iterator it = toppings.begin(); it!=toppings.end();it++)
    {
      res += it->first + ": " + std::to_string(it->second) + " oz " + "\n";
    }
  res += "Price: $" + stream.str() + "\n";
  return res;
}

double CustomItem::getPrice(){
  return price;
}

void CustomItem::addTopping(std::string topping){
  std::map<std::string,int>::iterator it;
  it = toppings.find(topping);
  if(it!=toppings.end())
    {
      toppings[topping]++;
    }
  else
    {
      toppings[topping] = 1;
    }
  price+=.4;
}
