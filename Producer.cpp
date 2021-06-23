#include "ItemQueue.h"
#include <string>
using namespace std;

class Producer {
    public:
        Producer(string nameIn, ItemQueue queueIn) {
            name = nameIn;
            queue = queueIn;
        }

        void produce() {

        }

    private:
        ItemQueue queue;
        string name;
        int itemId;
};
