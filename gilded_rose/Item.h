#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <vector>
using namespace std;

enum ItemType { LEGENDARY, CONJURED, MATURING, EXPIRING, NORMAL };

class Item {

protected:
    bool worthHigherMin();
    bool worthIsLowerMax();
    void increaseWorth();
    void decreaseWorth();
    void decreaseExpiredInDays();
    int getLimitForDoubleWorth();
    int getLimitForTripleWorth();
    int getMinWorth();
    int getMaxWorth();
    bool isExpired();


public:
    string name;
    int expiresInDays;
    int worth;
    Item(std::string name, int expiresInDays, int worth) : name(name), expiresInDays(expiresInDays), worth(worth)
    {};

    void virtual update();



};

#endif // ITEM_H