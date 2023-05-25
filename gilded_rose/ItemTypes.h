#ifndef GILDEDROSE_ITEMTYPES_H
#define GILDEDROSE_ITEMTYPES_H

#include <string>
#include <vector>
using namespace std;

#include "Item.h"
class LegendaryItem : public Item {
public:
  LegendaryItem(string name, int expiresInDays, int worth) : Item(name, expiresInDays, worth){};
  void update() override;
};

class ConjuredItem : public Item {
public:
  ConjuredItem(string name, int expiresInDays, int worth) : Item(name, expiresInDays, worth){};
    void update() override;
};

class MaturingItem : public Item {
public:
  MaturingItem(string name, int expiresInDays, int worth) : Item(name, expiresInDays, worth){};
    void update() override;
};

class ExpiringItem : public Item {
public:
  ExpiringItem(string name, int expiresInDays, int worth) : Item(name, expiresInDays, worth){};
    void update() override;
};

class NormalItem : public Item{
public:
    NormalItem(string name, int expiresInDays, int worth) : Item(name, expiresInDays, worth){};
    void update() override;
};


#endif // GILDEDROSE_ITEMTYPES_H
