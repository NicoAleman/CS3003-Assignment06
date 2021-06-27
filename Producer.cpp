#include "ItemQueue.h"
#include <string>
#include <ostream>
#include <iostream>
//for the rand function
#include <stdlib.h>
#include <thread>
#include <chrono> 
using namespace std;

class Producer {
    public:
        Producer(string nameIn, ItemQueue &queueIn) {
            name = nameIn;
            queue = queueIn;
        }

        void produce() {
            while(true) { // Loop until program is ended
                if (queue.isFull()) {
                    cout << "Producer " << name << ": Queue is full, waiting for item to be consumed..." << endl;
                    // Put thread to sleep until signal that queue is open?
                }
                else {
                    Item thing = Item(name, itemId++); // Each item gets unique ID
                    queue.put(thing); // Add newly initialized item to queue

                    if (queue.size() == 1) {
                        // Signal that queue is no longer empty?
                    }
                }

                this_thread::sleep_for (chrono::seconds(rand() % 5 + 1)); // Thread waits before producing new item
            }
        }

    private:
        ItemQueue queue;
        string name;
        int itemId;
};
