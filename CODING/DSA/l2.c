#include <stdio.h>
#include <stdlib.h>
void createlist();
void display();
void node_double();
void linked_list_reverse();
void reverse();
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} node;
node *start = NULL, *temp, *rear = NULL, *front = NULL;
int count = 0;
int main()
{
    int choice;
    do
    {
        printf("\n1:Insert New Element\t2:Display\t3:Double The Last nth Element\t4:Reverse the Linked List\t5:Exit\nEnter Choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createlist();
            break;
        case 2:
            display();
            break;
        case 3:
            node_double();
            break;
        case 4:
            
            reverse();
            break;
        default:
            break;
        }
    } while (choice != 5);
    return 0;
}
void createlist()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter New Value : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    count++;
    if (start == NULL)
    {
        start = temp;
        rear = temp;
        front = start;
    }
    else
    {
        // Complexity is Order of n
        //  node *ptr=start;
        //  while (ptr->next!=NULL)
        //  {
        //      ptr=ptr->next;
        //  }
        //  ptr->next=temp;

        // Complexity is Order of 1
        rear->next = temp;
        rear = temp;
    }
}
void display()
{
    if (start == NULL)
    {
        printf("List is Empty!!");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}

void node_double()
{
    int n;
    printf("Enter the Last nth Node to Print : ");
    scanf("%d", &n);
    int element = (count - n) + 1, a;
    if (n <= count)
    {
        temp = start;
        for (int i = 1; i != element; i++)
        {
            temp = temp->next;
        }
        // a = temp->data;
        // a = a * 2;
        temp->data = temp->data * 2;
        display();
    }
}

void reverse()
{
    node *prev = NULL, *curr = start, *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    start = prev;
    display();
}