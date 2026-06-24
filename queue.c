#include <stdio.h>
#include <stdlib.h>

// Define Node structure
struct Node
{
    int data;
    struct Node* next;
};

// Front and Rear pointers
struct Node* front = NULL;
struct Node* rear = NULL;

// Check if queue is empty
int isEmpty()
{
    return (front == NULL);
}

// Enqueue Operation
void enqueue(int requestID)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("\nMemory Overflow! Cannot allocate memory.\n");
        return;
    }

    newNode->data = requestID;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("Request %d added successfully.\n", requestID);
}

// Dequeue Operation
void dequeue()
{
    if (isEmpty())
    {
        printf("\nQueue Underflow! No requests to process.\n");
        return;
    }

    struct Node* temp = front;
    printf("Processing Request ID: %d\n", temp->data);

    front = front->next;

    if (front == NULL)
        rear = NULL;

    free(temp);
}

// Peek Operation
void peek()
{
    if (isEmpty())
    {
        printf("\nQueue is empty.\n");
        return;
    }

    printf("Front Request ID: %d\n", front->data);
}

// Display Queue
void display()
{
    if (isEmpty())
    {
        printf("\nQueue is empty.\n");
        return;
    }

    struct Node* temp = front;

    printf("\n----- Queue Status -----\n");
    printf("Requests in Queue:\n");

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Main Function
int main()
{
    int choice, requestID;

    printf("===== Service Request Management System (Linked List) =====\n");

    do
    {
        printf("\nMenu:\n");
        printf("1. Enqueue Request\n");
        printf("2. Dequeue Request\n");
        printf("3. Display Queue\n");
        printf("4. Peek Front Request\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter Request ID: ");
                scanf("%d", &requestID);
                enqueue(requestID);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                printf("Exiting system... Thank you!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}