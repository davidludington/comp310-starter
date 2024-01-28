#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}; 

struct node *head = NULL;
struct node *curr = NULL;

void push(int new_data){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = head;
    head = new_node;
} 

void delete_node(int key){
    struct node *temp = head, *prev = NULL;

    if(temp != NULL && temp->data == key){
        head = temp->next;
        free(temp);
        return;
    }

    //find node to be removed 
    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }

    //node not found with key
    if(temp == NULL) return;
    prev->next = temp->next;
    free(temp);
} 

void print_list(){
    struct node *current = head;
    printf("[ ");
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
    printf("]\n");
}

int main(int argc, char **argv){
    push(7);
    push(1);
    push(3);
    push(2);
    printf("\nCreated Linked List is:\n");
    print_list();

    delete_node(1);
    printf("\nLinked List after deletion of 1:\n");

    print_list();

}