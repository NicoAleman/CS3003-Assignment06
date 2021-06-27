#ifndef ItemQueue_H
#define ItemQueue_H

#include "Item.h"
#include <vector>

class ItemQueue {
    public:
        ItemQueue() {}

        // Returns if queue is empty
        bool isEmpty() {
            return queue.empty();
        }

        // Adds item to back of queue
        void put(Item item) {
            queue.push_back(item);
        }

        // Returns and removes item from front of queue
        Item take() {
            Item thing = queue.front();
            queue.erase(queue.begin());
            return thing;
        }

    private:
        vector<Item> queue;
};

#endif