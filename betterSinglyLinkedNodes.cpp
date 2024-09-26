#include <iostream>
using namespace std;

struct node {
    int a;
    struct node *link;
};

int main() {
    struct node *N1 = new node;
    N1->a = 1;
    N1->link = NULL;
    cout << N1->a<<endl;

    struct node *N2 = new node;
    N2->a = 2;
    N2->link = NULL;
    cout << N2->a<<endl;
    N1->link=N2;
    
    N2 = new node;
    N2->a = 3;
    N2->link = NULL;
    cout << N2->a<<endl;
    N2->link=N2;


    return 0;
}
