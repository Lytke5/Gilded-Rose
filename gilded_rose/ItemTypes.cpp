#include "ItemTypes.h"

void LegendaryItem::update()
{

}

void ConjuredItem::update()
{
    decreaseExpiredInDays();
    for(int i = 0; i < 2; i++) {
        if (worthHigherMin())
            decreaseWorth();

        if (isExpired()) {
            if (worthHigherMin())
                decreaseWorth();
            else
                worth = getMinWorth();
        }
    }
}

void MaturingItem::update()
{
    if(worthIsLowerMax())
        increaseWorth();

    decreaseExpiredInDays();

    if(isExpired()) {
        if (worthIsLowerMax())
            increaseWorth();
        else
            worth = getMaxWorth();
    }
}

void ExpiringItem::update()
{
    if(worthIsLowerMax())
        increaseWorth();

    if (worthIsLowerMax()) {
        if (expiresInDays <= getLimitForDoubleWorth()) {
            increaseWorth();
        }

        if (expiresInDays <= getLimitForTripleWorth()) {
            increaseWorth();
        }
    }

    decreaseExpiredInDays();

    if(isExpired()) {
        worth = getMinWorth();
    }
}

void NormalItem::update()
{
    if(worthHigherMin())
        decreaseWorth();

    decreaseExpiredInDays();

    if(isExpired())
    {
        if(worthHigherMin())
            decreaseWorth();
        else
            worth = getMinWorth();
    }
}
