#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem
{
 public:
  PreMadeItem(std::string name, std::string size);
  virtual ~PreMadeItem();
  virtual double getPrice();
  virtual std::string composeItem();
 private:
  std::string name;
};

#endif
