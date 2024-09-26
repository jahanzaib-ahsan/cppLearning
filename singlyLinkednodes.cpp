#include <iostream>
using namespace std;

struct node {
    int a;
    struct node *link;
};

int main() {
    struct node *N1 = new node;
    N1->a = 44;
    N1->link = NULL;
    cout << N1->a<<endl;
    delete N1;

    struct node *N2 = new node;
    N2->a = 42;
    N2->link = NULL;
    cout << N2->a<<endl;
    N1->link=N2;
    delete N2;

    struct node *N3 = new node;
    N3->a = 47;
    N3->link = NULL;
    cout << N3->a<<endl;
    N2->link=N3;
    delete N3;

    return 0;
}
