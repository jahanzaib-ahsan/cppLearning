#include <iostream>
using namespace std;

struct node {
    int a;
    struct node *link;
};
void countNodes(struct node *N1)
    {
        int count=0;
        if(N1==NULL)
        cout<<"Linked List is Empty"<<endl;
        struct node *ptr= NULL;
        ptr=N1;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->link;
        }
        cout<<"Total numbers of nodes in linked list "<<count<<endl;
    }


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
    N1->link->link=N2;
    
    countNodes(N1);

    return 0;
}
