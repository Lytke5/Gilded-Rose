#include <string>
#include <vector>
#include "Item.h"
#include "ItemTypes.h"

using namespace std;

class GildedRose
{
public:
    vector<Item*> & itemList;
    GildedRose(vector<Item*> & items);
    Item* createItem(string,int,int) const;
    ItemType getItemtypeFromName(string name) const;
    void updateAllItems();
    virtual ~GildedRose();
};
