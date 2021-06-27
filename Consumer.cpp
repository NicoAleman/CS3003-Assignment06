#include "ItemQueue.h"
#include <string>
#include <iostream>
#include <ostream>
using namespace std;

class Consumer {
    public:
        Consumer(string nameIn, ItemQueue &queueIn) {
            name = nameIn;
            queue = queueIn;
        }

        void consume() {
            while(true) { // Loop until program is ended
                if (queue.isEmpty()) {
                    cout << "Consumer " << name << ": Queue is empty, waiting for item to be produced..." << endl;
                    // Put thread to sleep until signal that queue is no longer empty
                }
                else {
                    Item thing = queue.take(); // Grab item from front of queue
                    cout << "Consumer " << name << ": Consumed Item #" << thing.getId() << " from Producer " << thing.getProducer() << endl;
                }

                this_thread::sleep_for (chrono::seconds(rand() % 5 + 1)); // Thread waits before consuming next item
            }
        }

    private:
        ItemQueue queue;
        string name;
};
