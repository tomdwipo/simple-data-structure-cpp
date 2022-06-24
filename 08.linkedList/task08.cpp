#include<iostream>

using namespace std;

struct node_item{
    int data;
    node_item *next;
};

typedef node_item *node;
node head = NULL, tail = NULL;

void insert_head(int data){
    node new_node = new node_item;
    new_node->data = data;
    new_node->next = head;
    head = new_node;
}

void print_list(){
    node temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void search_amount(int data){
    node temp = head;
    int count = 0;
    while(temp != NULL){
        if(temp->data == data){
            count++;
        }
        temp = temp->next;
    }
    cout << "jumlah dari " << data << " adalah " << count << endl;
}

void sort_list(){
    node temp = head;
    int temp_data;
    while(temp != NULL){
        node temp2 = temp->next;
        while(temp2 != NULL){
            if(temp->data > temp2->data){
                temp_data = temp->data;
                temp->data = temp2->data;
                temp2->data = temp_data;
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
}

int main(){
    insert_head(7);
    insert_head(1);
    insert_head(3);
    insert_head(3);
    insert_head(3);
    insert_head(4);
    insert_head(5);
    print_list();
    search_amount(3);
    cout << "hasil sort ascending: " << endl;
    sort_list();
    print_list();
    return 0;
}