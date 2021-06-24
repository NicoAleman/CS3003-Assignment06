#include "ItemQueue.h"
//for the sleep function--based off what i found online you need to make sure it works in different OSs
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <string>
//for the rand function
#include <stdlib.h>
using namespace std;

class Producer {
    public:
        Producer(string nameIn, ItemQueue queueIn) {
            name = nameIn;
            queue = queueIn;
        }

        void produce() {
            Item thing = new Item(name, itemId++);
            queue.put(thing);
            //in the java it sleeps for a random amount of time, we can change the amount if needed
            sleep(rand() % 5 + 1);
        }

    private:
        ItemQueue queue;
        string name;
        int itemId;
};
