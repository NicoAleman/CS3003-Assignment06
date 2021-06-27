#include "ItemQueue.h"
#include <string>
//for the rand function
#include <stdlib.h>
#include <thread>
#include <chrono> 
using namespace std;

class Producer {
    public:
        Producer(string nameIn, ItemQueue queueIn) {
            name = nameIn;
            queue = queueIn;
        }

        void produce() {
            while(true) { // Loop until program is ended
                Item thing = Item(name, itemId++); // Each item gets unique ID
                queue.put(thing); // Add newly initialized item to queue

                // Signal to a Consumer thread that an item has been produced ??

                this_thread::sleep_for (chrono::seconds(rand() % 5 + 1)); // Thread waits before producing new item
            }
        }

    private:
        ItemQueue queue;
        string name;
        int itemId;
};
