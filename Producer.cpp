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
            Item thing = Item(name, itemId++);
            queue.put(thing);
            //in the java it sleeps for a random amount of time, we can change the amount if needed
            this_thread::sleep_for (chrono::seconds(rand() % 5 + 1));
        }

    private:
        ItemQueue queue;
        string name;
        int itemId;
};
