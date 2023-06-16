/**
 *    author: A K M S Limon
 *    created: 01-November-2022  10:52:11
**/
#include <bits/stdc++.h>
using namespace std;

    typedef struct node Node;
    
    struct node {
        int data;
        struct node *next;
    };

    Node *create_node(int item, Node *next){

        Node *new_node = (Node *) malloc(sizeof(Node));
        new_node->data = item; 
        new_node->next = next;
        return new_node;
    }

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    Node *n;
    n = create_node(10, NULL);
    cout<<"data = "<<n->data<<endl;

    return 0;
}
 