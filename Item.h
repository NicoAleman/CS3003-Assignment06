#ifndef Item_H
#define Item_H

#include <string>
using namespace std;

class Item {
    public:
        Item() {
            producer = "N/A";
            id = 0;
        }

        Item(string prodIn, int idIn) {
            producer = prodIn;
            id = idIn;
        }

        string getProducer() {
            return producer;
        }

        int getId() {
            return id;
        }

    private:
        string producer;
        int id;
};

#endif