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
        Producer(string nameIn) {
            name = nameIn;
            itemId = 1;
        }

        void produce(ItemQueue* queue) {
            while(true) { // Loop until program is ended
                this_thread::sleep_for (chrono::seconds(rand() % 5 + 1)); // Thread waits before producing new item

                if (queue -> isFull()) {
                    cout << "Producer " << name << ": Queue is full, waiting for item to be consumed..." << endl;
                }
                else {
                    Item thing = Item(name, itemId++); // Each item gets unique ID
                    queue -> put(thing); // Add newly initialized item to queue
                }
            }
        }

    private:
        string name;
        int itemId;
};
