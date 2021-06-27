#include "Producer.cpp"
#include "Consumer.cpp"
#include <mutex>
#include <thread>
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

    // Start running Producers and Consumers on individual threads
    thread p1(&Producer::produce, produce1);
    thread p2(&Producer::produce, produce2);
    thread c1(&Consumer::consume, consume1);
    thread c2(&Consumer::consume, consume2);
    thread c3(&Consumer::consume, consume3);

    p1.join();
    p2.join();
    c1.join();
    c2.join();
    c3.join();
}
