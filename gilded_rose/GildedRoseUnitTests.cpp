#include <gtest/gtest.h>

#include "GildedRose.h"
#include "Item.h"

#define TEST_CONJURED_ITEMS

TEST(GildedRoseTest, Day01) {
    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
    items.push_back(G.createItem("Aged Brie", 2, 0));
    items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

    G.updateAllItems();
    EXPECT_EQ("+5 Dexterity Vest", G.itemList[0]->name);
    EXPECT_EQ(9, G.itemList[0]->expiresInDays);
    EXPECT_EQ(19, G.itemList[0]->worth);

    EXPECT_EQ("Aged Brie", G.itemList[1]->name);
    EXPECT_EQ(1, G.itemList[1]->expiresInDays);
    EXPECT_EQ(1, G.itemList[1]->worth);

    EXPECT_EQ("Elixir of the Mongoose", G.itemList[2]->name);
    EXPECT_EQ(4, G.itemList[2]->expiresInDays);
    EXPECT_EQ(6, G.itemList[2]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[3]->name);
    EXPECT_EQ(0, G.itemList[3]->expiresInDays);
    EXPECT_EQ(80, G.itemList[3]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[4]->name);
    EXPECT_EQ(-1, G.itemList[4]->expiresInDays);
    EXPECT_EQ(80, G.itemList[4]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[5]->name);
    EXPECT_EQ(14, G.itemList[5]->expiresInDays);
    EXPECT_EQ(21, G.itemList[5]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[6]->name);
    EXPECT_EQ(9, G.itemList[6]->expiresInDays);
    EXPECT_EQ(50, G.itemList[6]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[7]->name);
    EXPECT_EQ(4, G.itemList[7]->expiresInDays);
    EXPECT_EQ(50, G.itemList[7]->worth);
}

TEST(GildedRoseTest, Day02) {
    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
    items.push_back(G.createItem("Aged Brie", 2, 0));
    items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

    G.updateAllItems();
    G.updateAllItems();

    EXPECT_EQ("+5 Dexterity Vest", G.itemList[0]->name);
    EXPECT_EQ(8, G.itemList[0]->expiresInDays);
    EXPECT_EQ(18, G.itemList[0]->worth);

    EXPECT_EQ("Aged Brie", G.itemList[1]->name);
    EXPECT_EQ(0, G.itemList[1]->expiresInDays);
    EXPECT_EQ(2, G.itemList[1]->worth);

    EXPECT_EQ("Elixir of the Mongoose", G.itemList[2]->name);
    EXPECT_EQ(3, G.itemList[2]->expiresInDays);
    EXPECT_EQ(5, G.itemList[2]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[3]->name);
    EXPECT_EQ(0, G.itemList[3]->expiresInDays);
    EXPECT_EQ(80, G.itemList[3]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[4]->name);
    EXPECT_EQ(-1, G.itemList[4]->expiresInDays);
    EXPECT_EQ(80, G.itemList[4]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[5]->name);
    EXPECT_EQ(13, G.itemList[5]->expiresInDays);
    EXPECT_EQ(22, G.itemList[5]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[6]->name);
    EXPECT_EQ(8, G.itemList[6]->expiresInDays);
    EXPECT_EQ(50, G.itemList[6]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[7]->name);
    EXPECT_EQ(3, G.itemList[7]->expiresInDays);
    EXPECT_EQ(50, G.itemList[7]->worth);
}

TEST(GildedRoseTest, Day05) {
    const int NO_OF_DAYS =5;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
    items.push_back(G.createItem("Aged Brie", 2, 0));
    items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

    for (int i=1; i<=NO_OF_DAYS;i++) {
        G.updateAllItems();
    }

    EXPECT_EQ("+5 Dexterity Vest", G.itemList[0]->name);
    EXPECT_EQ(5, G.itemList[0]->expiresInDays);
    EXPECT_EQ(15, G.itemList[0]->worth);

    EXPECT_EQ("Aged Brie", G.itemList[1]->name);
    EXPECT_EQ(-3, G.itemList[1]->expiresInDays);
    EXPECT_EQ(8, G.itemList[1]->worth);

    EXPECT_EQ("Elixir of the Mongoose", G.itemList[2]->name);
    EXPECT_EQ(0, G.itemList[2]->expiresInDays);
    EXPECT_EQ(2, G.itemList[2]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[3]->name);
    EXPECT_EQ(0, G.itemList[3]->expiresInDays);
    EXPECT_EQ(80, G.itemList[3]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[4]->name);
    EXPECT_EQ(-1, G.itemList[4]->expiresInDays);
    EXPECT_EQ(80, G.itemList[4]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[5]->name);
    EXPECT_EQ(10, G.itemList[5]->expiresInDays);
    EXPECT_EQ(25, G.itemList[5]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[6]->name);
    EXPECT_EQ(5, G.itemList[6]->expiresInDays);
    EXPECT_EQ(50, G.itemList[6]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[7]->name);
    EXPECT_EQ(0, G.itemList[7]->expiresInDays);
    EXPECT_EQ(50, G.itemList[7]->worth);
}

TEST(GildedRoseTest, Day20) {
    const int NO_OF_DAYS =20;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
    items.push_back(G.createItem("Aged Brie", 2, 0));
    items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

    for (int i=1; i<=NO_OF_DAYS;i++) {
        G.updateAllItems();
    }

    EXPECT_EQ("+5 Dexterity Vest", G.itemList[0]->name);
    EXPECT_EQ(-10, G.itemList[0]->expiresInDays);
    EXPECT_EQ(0, G.itemList[0]->worth);

    EXPECT_EQ("Aged Brie", G.itemList[1]->name);
    EXPECT_EQ(-18, G.itemList[1]->expiresInDays);
    EXPECT_EQ(38, G.itemList[1]->worth);

    EXPECT_EQ("Elixir of the Mongoose", G.itemList[2]->name);
    EXPECT_EQ(-15, G.itemList[2]->expiresInDays);
    EXPECT_EQ(0, G.itemList[2]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[3]->name);
    EXPECT_EQ(0, G.itemList[3]->expiresInDays);
    EXPECT_EQ(80, G.itemList[3]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[4]->name);
    EXPECT_EQ(-1, G.itemList[4]->expiresInDays);
    EXPECT_EQ(80, G.itemList[4]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[5]->name);
    EXPECT_EQ(-5, G.itemList[5]->expiresInDays);
    EXPECT_EQ(0, G.itemList[5]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[6]->name);
    EXPECT_EQ(-10, G.itemList[6]->expiresInDays);
    EXPECT_EQ(0, G.itemList[6]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[7]->name);
    EXPECT_EQ(-15, G.itemList[7]->expiresInDays);
    EXPECT_EQ(0, G.itemList[7]->worth);
}

TEST(GildedRoseTest, Day30) {
    const int NO_OF_DAYS =30;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("+5 Dexterity Vest", 10, 20));
    items.push_back(G.createItem("Aged Brie", 2, 0));
    items.push_back(G.createItem("Elixir of the Mongoose", 5, 7));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", 0, 80));
    items.push_back(G.createItem("Sulfuras, Hand of Ragnaros", -1, 80));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 15, 20));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 10, 49));
    items.push_back(G.createItem("Backstage passes to a TAFKAL80ETC concert", 5, 49));

    for (int i=1; i<=NO_OF_DAYS;i++) {
        G.updateAllItems();
    }

    EXPECT_EQ("+5 Dexterity Vest", G.itemList[0]->name);
    EXPECT_EQ(-20, G.itemList[0]->expiresInDays);
    EXPECT_EQ(0, G.itemList[0]->worth);

    EXPECT_EQ("Aged Brie", G.itemList[1]->name);
    EXPECT_EQ(-28, G.itemList[1]->expiresInDays);
    EXPECT_EQ(50, G.itemList[1]->worth);

    EXPECT_EQ("Elixir of the Mongoose", G.itemList[2]->name);
    EXPECT_EQ(-25, G.itemList[2]->expiresInDays);
    EXPECT_EQ(0, G.itemList[2]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[3]->name);
    EXPECT_EQ(0, G.itemList[3]->expiresInDays);
    EXPECT_EQ(80, G.itemList[3]->worth);

    EXPECT_EQ("Sulfuras, Hand of Ragnaros", G.itemList[4]->name);
    EXPECT_EQ(-1, G.itemList[4]->expiresInDays);
    EXPECT_EQ(80, G.itemList[4]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[5]->name);
    EXPECT_EQ(-15, G.itemList[5]->expiresInDays);
    EXPECT_EQ(0, G.itemList[5]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[6]->name);
    EXPECT_EQ(-20, G.itemList[6]->expiresInDays);
    EXPECT_EQ(0, G.itemList[6]->worth);

    EXPECT_EQ("Backstage passes to a TAFKAL80ETC concert", G.itemList[7]->name);
    EXPECT_EQ(-25, G.itemList[7]->expiresInDays);
    EXPECT_EQ(0, G.itemList[7]->worth);
}

#ifdef TEST_CONJURED_ITEMS

TEST(NewConjuredItemsTest, Day01) {
    const int NO_OF_DAYS = 1;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

    for (int i = 1; i <= NO_OF_DAYS; i++) {
        G.updateAllItems();
    }
    cout << "\"Conjured\" itemList degrade in Quality twice as fast as normal itemList";

    EXPECT_EQ("Conjured Mana Cake", G.itemList[0]->name);
    EXPECT_EQ(4, G.itemList[0]->worth);
}

TEST(NewConjuredItemsTest, Day02) {
    const int NO_OF_DAYS = 2;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

    for (int i = 1; i <= NO_OF_DAYS; i++) {
        G.updateAllItems();
    }

    EXPECT_EQ("Conjured Mana Cake", G.itemList[0]->name);
    EXPECT_EQ(2, G.itemList[0]->worth);
}

TEST(NewConjuredItemsTest, Day05) {
    const int NO_OF_DAYS = 5;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

    for (int i = 1; i <= NO_OF_DAYS; i++) {
        G.updateAllItems();
    }

    EXPECT_EQ("Conjured Mana Cake", G.itemList[0]->name);
    EXPECT_EQ(0, G.itemList[0]->worth);
}

TEST(NewConjuredItemsTest, Day20) {
    const int NO_OF_DAYS = 20;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

    for (int i = 1; i <= NO_OF_DAYS; i++) {
        G.updateAllItems();
    }

    EXPECT_EQ("Conjured Mana Cake", G.itemList[0]->name);
    EXPECT_EQ(0, G.itemList[0]->worth);
}

TEST(NewConjuredItemsTest, Day30) {
    const int NO_OF_DAYS = 30;

    vector<Item*> items;
    GildedRose G(items);

    items.push_back(G.createItem("Conjured Mana Cake", 3, 6));

    for (int i = 1; i <= NO_OF_DAYS; i++) {
        G.updateAllItems();
    }

    EXPECT_EQ("Conjured Mana Cake", G.itemList[0]->name);
    EXPECT_EQ(0, G.itemList[0]->worth);
}
#endif