

/* ���α׷� 6-2 ����Ʈ ���� ���� : listcreate.c */
#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node* link;
};
typedef struct node list_node;
typedef list_node* list_ptr;

list_ptr create(int n) {
    list_ptr a, b, c;
    int i;
    
        a = (list_ptr)malloc(sizeof(list_node));
        b = (list_ptr)malloc(sizeof(list_node));
        c = (list_ptr)malloc(sizeof(list_node));
        b->data = 55; a->data= 44; c->data= 34; /* ����Ʈ�� �� */
     
    
        return 0;
}

void print_list(list_ptr ptr) {
    printf("The list contains: ");
    for (; ptr; ptr = ptr->link)
        printf("%4d", ptr->data);
    printf("\n");
}

int main()
{
    list_ptr ptr = NULL;
    ptr = create(6); /* 6���� ��带 ���� ���Ḯ��Ʈ�� ����� */
    print_list(ptr);
}