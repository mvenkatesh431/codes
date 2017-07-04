#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int isEmpty(struct Node *root){
    return !root;
}

void push( struct Node **root, int data){

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    // New node.
    if(isEmpty((*root))){
//        printf("Empty Stack \n");
        newNode->data = data;
        newNode->next = NULL;
        (*root) = newNode;
    }else{
        newNode->data = data;
        newNode->next = (*root);
        (*root) = newNode;
    }
}

void print(struct Node *root)
{
    struct Node *temp = root;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int pop( struct Node **root){

    if(isEmpty((*root)))
        return 0;

    int poped_item;
    struct Node *temp = *root;
    poped_item = temp->data;
    (*root) = (*root)->next;
    free(temp);
    return poped_item;
}

int top(struct Node *root){

    if(isEmpty(root))
        return 0;

    return root->data;
}

int main(){

    struct Node *root = NULL;
    int poped_item;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    push(&root, 40);
    push(&root, 50);

    print(root);

    poped_item = pop(&root);
    printf("Poped Item : %d \n", poped_item);

        // get the topmost element in the stack.
    printf("Top Item in the Stack : %d \n", top(root));

    poped_item = pop(&root);
    printf("Poped Item : %d \n", poped_item);

        // get the topmost element in the stack.
    printf("Top Item in the Stack : %d \n", top(root));


    poped_item = pop(&root);
    printf("Poped Item : %d \n", poped_item);

    // get the topmost element in the stack.
    printf("Top Item in the Stack : %d \n", top(root));

    print(root);

    return 0;
}
