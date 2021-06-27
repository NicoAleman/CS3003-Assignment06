#include "Producer.cpp"
#include "Consumer.cpp"
#include <mutex>
#include <iostream>
using namespace std;

main() {
    // *PLACEHOLDER* //
    cout << "Press ENTER to continue....." << endl;
    cin.ignore(1);
    ItemQueue queue = ItemQueue();
    Producer produce1 = Producer("produce1",queue);
    Producer produce2 = Producer("produce2",queue);
    Consumer consume1 = Consumer("consume1",queue);
    Consumer consume2 = Consumer("consume2",queue);
    Consumer consume3 = Consumer("consume3",queue);
    produce1.produce();
    produce2.produce();
    consume1.consume();
    consume2.consume();
    consume3.consume();




    // ///////////// //
}
