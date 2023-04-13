/*4.Write a menu driven program to implement Deques (both
Input-restricted and Output-restricted) operations such as Enqueue,
Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.*/
#include <stdio.h>
int deque_arr[5];
int left = -1, right = -1;

void InsertRight()
{
    int added_item;
    if ((left == 0 && right == 5 - 1) || (left == right + 1))
    {
        printf("Queue Overflow\n");
        return;
    }
    if (left == -1)
    {
        left = 0;
        right = 0;
    }
    else if (right == 5 - 1)
        right = 0;
    else
        right = right + 1;
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[right] = added_item;
}

void InsertLeft()
{
    int added_item;
    if ((left == 0 && right == 5 - 1) || (left == right + 1))
    {
        printf("Queue Overflow \n");
        return;
    }
    if (left == -1)
    {
        left = 0;
        right = 0;
    }
    else if (left == 0)
        left = 5 - 1;
    else
        left = left - 1;
    printf("Input the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[left] = added_item;
}

void DeleteLeft()
{
    if (left == -1)
    {
        printf("Queue Under-flow\n");
        return;
    }
    printf("Element has been deleted from queue is : %d\n", deque_arr[left]);
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else if (left == 5 - 1)
        left = 0;
    else
        left = left + 1;
}

void DeleteRight()
{
    if (left == -1)
    {
        printf("Queue Under flow\n");
        return;
    }
    printf("Element has been deleted from queue is : %d\n", deque_arr[right]);
    if (left == right)
    {
        left = -1;
        right = -1;
    }
    else if (right == 0)
        right = 5 - 1;
    else
        right = right - 1;
}

void Display()
{
    int fpos = left, rpos = right;
    if (left == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements :\n");
    if (fpos <= rpos)
    {
        while (fpos <= rpos)
        {
            printf("%d ", deque_arr[fpos]);
            fpos++;
        }
    }
    else
    {
        while (fpos <= 5 - 1)
        {
            printf("%d ", deque_arr[fpos]);
            fpos++;
        }
        fpos = 0;
        while (fpos <= rpos)
        {
            printf("%d ", deque_arr[fpos]);
            fpos++;
        }
    }
    printf("\n");
}

void Input()
{
    int Option = 0;
    do // while(Option<0 || Option>5)
    {
        printf("1.Insert at right\n");
        printf("2.Delete from left\n");
        printf("3.Delete from right\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &Option);

        switch (Option)
        {
        case 1:
            InsertRight();
            break;
        case 2:
            DeleteLeft();
            break;
        case 3:
            DeleteRight();
            break;
        case 4:
            Display();
            break;
        case 5:
            break;
        default:
            printf("Wrong Option\n");
        }
    } while (Option != 5);
}

void Output()
{
    int Option = 0;
    do // while(Option<=0 || Option>5)
    {
        printf("1.Insert at right\n");
        printf("2.Insert at left\n");
        printf("3.Delete from left\n");
        printf("4.Display\n");
        printf("5.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &Option);
        switch (Option)
        {
        case 1:
            InsertRight();
            break;
        case 2:
            InsertLeft();
            break;
        case 3:
            DeleteLeft();
            break;
        case 4:
            Display();
            break;
        case 5:
            break;
        default:
            printf("Wrong Option\n");
        }
    } while (Option != 5);
}

int main()
{
    int Option = 0;
    printf("1.Input restricted dequeue\n");
    printf("2.Output restricted dequeue\n");
    printf("Enter your choice : ");
    scanf("%d", &Option);
    switch (Option)
    {
    case 1:
        Input();
        break;
    case 2:
        Output();
        break;
    default:
        printf("Wrong Option\n");
    }
    return 0;
}