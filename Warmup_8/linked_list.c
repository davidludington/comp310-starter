#include <stdio.h>

struct node{
    int data;
    struct node *next;
}; 

struct node *head = null;
struct node *curr = null;

void push(int new_data){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->next = head;
    head = node;
} 
void delete(){} 
void print(){}

int main(int argc, char **argv){
    

}