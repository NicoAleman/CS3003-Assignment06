#include "Producer.cpp"
#include "Consumer.cpp"
#include <mutex>
#include <iostream>
using namespace std;

main() {
    ItemQueue queue = ItemQueue(); // Initialize Queue

    // Initialize Producers and Consumers
    Producer produce1 = Producer("produce1", queue);
    Producer produce2 = Producer("produce2", queue);
    Consumer consume1 = Consumer("consume1", queue);
    Consumer consume2 = Consumer("consume2", queue);
    Consumer consume3 = Consumer("consume3", queue);

    // Start running Producers and Consumers
    produce1.produce();
    produce2.produce();
    consume1.consume();
    consume2.consume();
    consume3.consume();

    // *PLACEHOLDER* //
    cout << "Press ENTER to continue....." << endl;
    cin.ignore(1);
    // ///////////// //
}
