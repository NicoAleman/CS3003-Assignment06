#include "Producer.cpp"
#include "Consumer.cpp"
#include <thread>
using namespace std;

main() {
    ItemQueue queue = ItemQueue(); // Initialize Queue
    ItemQueue* queuePtr = &queue;

    // Initialize Producers and Consumers
    Producer produce1 = Producer("P1");
    Producer produce2 = Producer("P2");
    Consumer consume1 = Consumer("C1");
    Consumer consume2 = Consumer("C2");
    Consumer consume3 = Consumer("C3");

    // Start running Producers and Consumers on individual threads
    thread p1(&Producer::produce, &produce1, queuePtr);
    thread p2(&Producer::produce, &produce2, queuePtr);
    thread c1(&Consumer::consume, &consume1, queuePtr);
    thread c2(&Consumer::consume, &consume2, queuePtr);
    thread c3(&Consumer::consume, &consume3, queuePtr);

    p1.join();
    p2.join();
    c1.join();
    c2.join();
    c3.join();
}
