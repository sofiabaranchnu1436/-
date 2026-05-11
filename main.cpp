/#include "Node.h"
#include "SinglyLinkedList.h"
#include "DoublyLinkedList.h"

int main() {
    SinglyLinkedList<int> list;

    list.push_back(10);
    list.push_back(20);
    list.push_front(5);

    list.print();

    list.remove(1);
    list.print();

    DoublyLinkedList<int> dlist;

    dlist.push_back(1);
    dlist.push_back(2);
    dlist.push_front(0);

    dlist.print();

    return 0;
}
