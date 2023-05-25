#include "Item.h"
#define Min_WORTH 0
#define MAX_WORTH 50
#define LIMIT_INCREASE_WORTH_DOUBLE 10
#define LIMIT_INCREASE_WORTH_TRIPLE 5

bool Item::worthHigherMin() {
    return worth > 0;
}

bool Item::worthIsLowerMax() {
    return worth < 50;
}

void Item::increaseWorth()
{
    worth++;
}

void Item::decreaseWorth()
{
    worth--;
}

void Item::decreaseExpiredInDays()
{
    expiresInDays--;
}

int Item::getLimitForDoubleWorth()
{
    return LIMIT_INCREASE_WORTH_DOUBLE;
}
int Item::getLimitForTripleWorth()
{
    return LIMIT_INCREASE_WORTH_TRIPLE;
}

int Item::getMinWorth()
{
    return Min_WORTH;
}

int Item::getMaxWorth()
{
    return MAX_WORTH;
}

bool Item::isExpired()
{
    if(expiresInDays < 0){
        return true;
    }
    else{
        return false;
    }
}

void Item::update()
{
}
