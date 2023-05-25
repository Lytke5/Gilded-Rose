#include "GildedRose.h"

GildedRose::GildedRose(vector<Item *> &items) : itemList(items) {}

GildedRose::~GildedRose() {
    for (auto &item: itemList) {
        delete item;
    }
}

ItemType GildedRose::getItemtypeFromName(string name) const
{
    if(name == "Backstage passes to a TAFKAL80ETC concert")
    {
        return EXPIRING;
    }
    if(name == "Sulfuras, Hand of Ragnaros")
    {
        return LEGENDARY;
    }
    if(name == "Aged Brie")
    {
        return MATURING;
    }
    if(name == "Conjured Mana Cake")
    {
        return CONJURED;
    }
    return NORMAL;
}


void GildedRose::updateAllItems() {
    for (Item* this_item : itemList) {
        this_item->update();
    }
}

Item *GildedRose::createItem(string name, int expiresInDays, int worth) const {

    ItemType typeOfItem = getItemtypeFromName(name);

    if(typeOfItem == LEGENDARY)
    {
        return new LegendaryItem(name, expiresInDays, worth);
    }
    if(typeOfItem == EXPIRING)
    {
        return new ExpiringItem(name, expiresInDays, worth);
    }
    if(typeOfItem == MATURING)
    {
        return new MaturingItem(name, expiresInDays, worth);
    }
    if(typeOfItem == CONJURED)
    {
        return new ConjuredItem(name, expiresInDays, worth);
    }
    if(typeOfItem == NORMAL)
    {
        return new NormalItem(name, expiresInDays, worth);
    }
}