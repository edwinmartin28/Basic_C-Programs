//C program to implement best fit algorithm using linked list
#include <stdio.h>
#include<stdlib.h>
int g = 1, k = 1;
struct free {
    int tag;
    int size;
    struct free* next;
}* free_head = NULL, *prev_free = NULL;
struct alloc {
    int tag;
    int size;
    struct alloc* next;
}* alloc_head = NULL, *prev_alloc = NULL;
void create_free(int c);
void create_alloc(int c);
void print_free();
int main()
{
    int blockSize[20],processSize[20];
    int x, y;
    printf("Enter the number of free space :");
    scanf("%d", &x);
    printf("Enter the number of spaces to allocate :");
    scanf("%d", &y);
    printf("Enter the free space:");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &blockSize[i]);
        create_free(blockSize[i]);
    }
    printf("Free Spaces Available :\n");
    print_free();
    printf("Enter the memory to be allocated :");
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &processSize[i]);
        create_alloc(processSize[i]);
    }
    printf("Free Spaces Available after Allocation:\n");
    print_free();
}
void create_free(int c)
{
    struct free* p;
    p = (struct free*)malloc(sizeof(struct free));
    p->size = c;
    p->tag = g;
    p->next = NULL;
    if (free_head == NULL)
        free_head = p;
    else
        prev_free->next = p;
    prev_free = p;
    g++;
}
void create_alloc(int c)
{
    struct alloc* q;
    q = (struct alloc*)malloc(sizeof(struct alloc));
    q->size = c;
    q->tag = k;
    q->next = NULL;
    struct free* p = free_head;
    struct free* r;
    r = (struct free*)malloc(sizeof(struct free));
    r->size = 99999;
    while (p != NULL) {
        if (q->size <= p->size) {
            if (p->size < r->size)
                r = p;
        }
        p = p->next;
    }
    if (r->size != 99999) {
        r->size -= q->size;
        if (alloc_head == NULL)
            alloc_head = q;
        else {
            prev_alloc = alloc_head;
            while (prev_alloc->next != NULL)
                prev_alloc = prev_alloc->next;
            prev_alloc->next = q;
        }
        k++;
    }
    else
        printf("Block with size %d can't be allocated\n",c);
}
void print_free()
{
    struct free* p;
    p = free_head;
    printf("Tag\tSize\n");
    while (p != NULL) {
        printf("%d\t%d\n",p->tag,p->size);
        p = p->next;
    }
}
