/*5.Write a menu driven program to implement circular queue operations such as
Enqueue, Dequeue, Peek, Display of elements, IsEmpty using linked list.*/
#include <stdio.h>

int queue[10];
int front = -1, rear = -1;

void enque(void);
int deque (void);
int peek(void);
void display(void);

void main()
{
    int val, option;

    do
    {
        printf("\n****MAIN MENU****");
        printf("\n 1. Insert an element");
        printf("\n 2. Delete an element");
        printf("\n 3. PEEK");
        printf("\n 4. Display the queue");
        printf("\n 5. EXIT");
        printf("\n Enter your option");
        scanf("%d", &option);

        switch (option)
        {

        case 1:

            enque();
            break;

        case 2:

            val = deque ();

            if (val != -1)
                printf("\n The deleted element from queue is : %d", val);
            break;

        case 3:

            val = peek();

            if (val != -1)
                printf("\n The first value in queue is : %d", val);
            break;

        case 4:

            display();
            break;
        }

    } while (option != 5);
}

void enque()
{

    int num;
    printf("\n Enter the number to be inserted in queue :");
    scanf("%d", &num);

    if ((front == 0 && rear == (10 - 1)) || (front == rear + 1))
        printf("\n Queue overflow");

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }

    else if (front != 0 && rear == 10 - 1)
    {
        rear = 0;
        queue[rear] = num;
    }

    else
    {
        rear++;
        queue[rear] = num;
    }
}

int deque ()
{

    int val;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue underflow");
        return -1;
    }

    val = queue[front];

    if (front == rear)
        front = rear = -1;

    else
    {

        if (front == 10 - 1)
            front = 0;

        else
            front++;
    }
    return val;
}

int peek()
{

    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
        return -1;
    }

    else

        return (queue[front]);
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }

    else
    {

        if (front < rear)
        {
            for (i = front; i <= rear; i++)
                printf("\t%d", queue[i]);
        }
        else
        {
            for (i = front; i < 10; i++)
                printf("\t%d", queue[i]);

            for (i = 0; i <= rear; i++)
                printf("\t%d", queue[i]);
        }
    }
}