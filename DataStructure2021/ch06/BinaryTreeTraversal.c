#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* llink;
    char data;
    struct node* rlink;
};

struct node* CREATE(char item) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));

    ptr->llink = NULL;
    ptr->data = item;
    ptr->rlink = NULL;
    return ptr;
}

void PREORDER(struct node* ptr) {
    if (ptr != NULL) {
        //D -> L -> R
        printf("%c ", ptr->data);

        PREORDER(ptr->llink);
        PREORDER(ptr->rlink);
    }
}

void INORDER(struct node* ptr) {
    if (ptr != NULL) {
        //L -> D -> R
        INORDER(ptr->llink);

        printf("%c ", ptr->data);

        INORDER(ptr->rlink);
    }
}

void POSTORDER(struct node* ptr) {
    if (ptr != NULL) {
        //L -> R -> D
        POSTORDER(ptr->llink);
        POSTORDER(ptr->rlink);

        printf("%c ", ptr->data);
    }
}

//飘府 昏力 L - > R - > D(PostOrder)
void DELETE(struct node* Delnode) {
    if (Delnode != NULL) {
        DELETE(Delnode->llink);
        DELETE(Delnode->rlink);

        free(Delnode);
    }
}

int main(void) {
    struct node* root = CREATE('A');
    root->llink = CREATE('B');
    root->rlink = CREATE('C');
    root->llink->llink = CREATE('D');
    root->llink->rlink = CREATE('H');
    root->rlink->llink = CREATE('E');
    root->rlink->rlink = CREATE('F');
    root->llink->rlink->llink = CREATE('D');

    printf("傈困 款青(PreOrder) : ");
    PREORDER(root);
    printf("\n");

    printf("吝困 款青(InOrder) : ");
    INORDER(root);
    printf("\n");

    printf("饶困 款青(PostOrder) : ");
    POSTORDER(root);
    printf("\n");

    DELETE(root);
    return 0;
}