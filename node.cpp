#include <iostream>
using namespace std;

struct node {
    int a;
    struct node *link;
};

int main() {
    struct node *head = new node;
    head->a = 44;
    head->link = NULL;

    cout << head->a;

    delete head;
    return 0;
}
