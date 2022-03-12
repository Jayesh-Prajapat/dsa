#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* front = 0;
struct Node* rear = 0;
void enqueue(int x)
{
    struct Node* start;
    start = (struct Node*)malloc(sizeof(struct Node));
    start->data = x;
    start->next = 0;

    if(front == 0 && rear == 0)
    {
        front = rear = start;
    }
    else{
        rear->next = start;
        rear = start;
    }
}
void display()
{
    struct Node* temp;
    if(front == 0 && rear == 0)
    {
        printf("\n queue is empty ........!");
    }
    else
    {
        temp = front;
        while(temp != 0)
        {
            printf("\n %d",temp->data);
            temp = temp->next;
        }
    }
}
void dequeue()
{
    struct Node* temp;
    temp = front;
    if(front == 0 && rear == 0)
    {
        printf("\n queue is empty ........!");
    }
    else
    {
        printf("\n %d",front->data);
      //  temp = front;
        front = front->next;
        free(temp);
    }
}
int main()
{
    int ch;
    while(1)
    {
        
         printf("\n press 1 for insert element queue ");
         printf("\n press 2 for delete element from queue ");
         printf("\n press 3 for traverse queue ");
         printf("\n press 4 for exit = ");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:
             int n;
             printf("\n enter the value of n = ");
             scanf("%d",&n);
             enqueue(n);
             break;

             case 2:
             dequeue();
             break;

             case 3:
             display();
             break;

             case 4:
             exit(1);
             break;
         }
    }
}