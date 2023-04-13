/*1.Write a menu driven program to implement queue operations such as Enqueue,
Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.*/
#include <stdio.h>
int queue[10], front = -1, rear = -1;

void insert(void);
int deletion(void);
int peek(void);
void display(void);

int main()
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

            insert();
            break;

        case 2:

            val = deletion();

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
    return 1;
}

void insert()
{

    int num;
    printf("\n Enter the number to be inserted in queue :");
    scanf("%d", &num);

    if (rear == (10 - 1))
        printf("\n Queue overflow");

    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = num;
    }

    else
    {
        rear++;
        queue[rear] = num;
    }
}

int deletion() 
{

    int val;
    if (front == -1 || front > rear)
    {
        printf("\nQueue underflow");
        return -1;
    }

    else
    {

        val = queue[front];
        front++;

        if (front > rear)
            front = rear = -1;

        return val;
    }
}

int peek()
{

    if (front == -1 || front > rear)
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
    if (front == -1 || front > rear)
    {
        printf("\nQueue is empty");
    }

    else
    {
        for (i = front; i <= rear; i++)
            printf("\t%d", queue[i]);
    }
}