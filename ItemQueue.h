#ifndef ItemQueue_H
#define ItemQueue_H

#include "Item.h"
#include <iostream>

class ItemQueue {
    public:
        ItemQueue() {
            queue_size = 0;
        }

        // Returns if queue is empty
        bool isEmpty() {
            return (queue_size == 0);
        }

        // Returns if queue is full
        bool isFull() {
            return (queue_size == 10);
        }

        // Returns queue size
        int size() {
            return queue_size;
        }

        // Adds item to back of queue
        void put(Item item) {
            queue[queue_size] = item;
            queue_size += 1;
        }

        // Returns and removes item from front of queue
        Item take() {
            Item thing = queue[0];
            for (int i = 0; i < 9; i++) { // Remove front item of queue and shift elements forward
                queue[i] = queue[i + 1];
            }
            queue_size -= 1;
            return thing;
        }

    private:
        Item queue[10];
        int queue_size;
};

#endif