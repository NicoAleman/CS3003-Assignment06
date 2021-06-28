#include "ItemQueue.h"
#include <string>
#include <iostream>
#include <ostream>
using namespace std;

class Consumer {
    public:
        Consumer(string nameIn) {
            name = nameIn;
        }

        void consume(ItemQueue* queue) {
            while(true) { // Loop until program is ended
                this_thread::sleep_for (chrono::seconds(rand() % 5 + 3)); // Thread waits before consuming next item
                if (queue -> isEmpty()) {
                    cout << "Consumer " << name << ": Queue is empty, waiting for item to be produced..." << endl;
                    // Put thread to sleep until signal that queue is no longer empty
                }
                else {
                    Item thing = queue -> take(); // Grab item from front of queue
                    cout << "Consumer " << name << ": Consumed Item #" << thing.getId() << " from Producer " << thing.getProducer() << endl;
                }
            }
        }

    private:
        string name;
};
