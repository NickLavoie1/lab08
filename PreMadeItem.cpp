#include "PreMadeItem.h"
#include <iomanip>
#include <cmath>
#include <iostream>
#include <sstream>

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem::IceCreamItem(size){
  this->name = name;
}

PreMadeItem::~PreMadeItem(){

}

std::string PreMadeItem::composeItem()
{
  std::stringstream stream;
  stream << std::fixed << std::setprecision(2) << getPrice();
  std::string res = "Pre-made Size: " + size + "\n" + "Pre-made Item: " + name + "\n" + "Price: $" + stream.str() + "\n";
  return res;
}

double PreMadeItem::getPrice()
{
  return price;
}
