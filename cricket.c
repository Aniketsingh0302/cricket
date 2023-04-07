#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;
struct Node *fifth;
struct Node *sixth
struct Node *seventh;
void linked_list()
{

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));
    seventh = (struct Node *)malloc(sizeof(struct Node));

    head->data = 0;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 2;
    third->next = fourth;

    fourth->data = 3;
    fourth->next = fifth;

    fifth->data = 4;
    fifth->next = sixth;

    sixth->data = 6;
    sixth->next = seventh;

    seventh->data = 5;
    seventh->next = NULL;
}
void printRandom(struct Node *head)
{

    if (head == NULL)
        return;

    srand(time(NULL));

    int result = head->data;

    struct Node *current = head;
    int n;
    for (n = 2; current != NULL; n++)
    {

        if (rand() % n == 0)
            result = current->data;

        current = current->next;
    }
    if (result == 5)
    {
        printf("you are out \n");
        printf("**NEXT PLAYER**\n");
    }
    else
    {
        printf("RUN SCORED %d \n", result);
        printf("**PLAY AGAIN** \n");
        // printRandom(head->next);
    }
}

/*display(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("element : %d\n ", ptr->data);
        ptr = ptr->next;
    }
}*/

int main()
{
    linked_list();
    // display(head);
    printf("\n \n");
     
       
    
 
    printRandom(head);
   

    printf("\n \n");

    return 0;
}