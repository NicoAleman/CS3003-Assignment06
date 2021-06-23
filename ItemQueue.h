#ifndef ItemQueue_H
#define ItemQueue_H

#include "Item.h"

class ItemQueue {
    public:
        ItemQueue() {}

        void put(Item item) {

        }

        Item take() {
            return Item("*INSERT PRODUCER*", 0); // Placeholder Values
        }
};

#endif