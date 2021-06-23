#include "ItemQueue.h"
#include <string>
using namespace std;

class Consumer {
    public:
        Consumer(string nameIn, ItemQueue queueIn) {
            name = nameIn;
            queue = queueIn;
        }

        void consume() {

        }

    private:
        ItemQueue queue;
        string name;
};
