#include "ItemQueue.h"
#include <string>
#include <iostream>
using namespace std;

class Consumer {
    public:
        Consumer(string nameIn, ItemQueue queueIn) {
            name = nameIn;
            queue = queueIn;
        }

        void consume() {
            Item thing = queue.take();
            //The java version uses a logger here, but I don't think that exists in C++, so I figure a cout is the next best thing
            cout << "Consumer " << name << " consume item " << thing.getId() << " produced by " << thing.getProducer() << endl;
        }

    private:
        ItemQueue queue;
        string name;
};
