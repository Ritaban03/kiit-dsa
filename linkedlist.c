#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int roll;
    struct node *next;
} * NODE;

NODE start = NULL;

NODE create(NODE start)
{
    NODE new_node;
    int x;
    printf("Enter -1 to End\n");
    printf("Enter the roll: ");
    scanf("%d", &x);
    while (x != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->roll = x;
        if (start == NULL)
        {
            start = new_node;
            new_node->next = NULL;
        }
        else
        {
            new_node->next = start;
            start = new_node;
        }
        printf("Enter the roll: ");
        scanf("%d", &x);
    }
    return start;
}

void display(NODE start)
{
    NODE ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ", ptr->roll);
        ptr = ptr->next;
    }
}

int main()
{
    int user_choice;
    printf("Enter your choice for performing the following operations on a linked list: \n");
    printf("1 to Create: \n");
    printf("2 to Display: \n");
    printf("3 to Insert: \n");
    printf("4 to Delete: \n");
    printf("5 to Search: \n");
    printf("6 to Exit: \n");
    scanf("%d", &user_choice);

    NODE LL;
    while (user_choice != 6)
    {
        if (user_choice == 1)
        {
            LL=create(start);
        }
        if (user_choice == 2)
        {
            display(LL);
            printf("\n");
        }
        printf("Enter your choice again: ");
        scanf("%d",&user_choice);
    }
}