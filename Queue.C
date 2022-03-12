#include<stdio.h>
#include<stdlib.h>
int main()
{
     int data[10];
     int front,rear,i,ch;
     front=rear=-1;
     while(1)
     {
         printf("\n press 1 for initilize queue = ");
         printf("\n press 2 for insert element queue ");
         printf("\n press 3 for delete element from queue ");
         printf("\n press 4 for traverse queue ");
         printf("\n press 5 for exit = ");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:
                 front = rear = -1;
                 printf("\n queue is initilized successfully.....! ");
             break;

             case 2:
                 if(front == -1)
                 {
                     front = rear = 0;
                     printf("\n enter the new element into queue at %d location = ",rear);
                     scanf("%d",&data[rear]);
                 }
                 else
                 {
                    rear++;
                     printf("\n enter the new element into  queue at %d location = ",rear);
                     scanf("%d",&data[rear]);
                 }
             break;

             case 3:
                 if(front == -1 || front>rear)
                 {
                     printf("\n queue is empty");
                 }
                 else
                 {
                     printf("\n deleted element is = %d at %d location ",data[front],front);
                     front++;
                 }
             break;

             case 4:
                 if(front == -1 || front>rear)
                 {
                     printf("\n queue is empty");
                 }
                 else
                 {
                     for(i=front;i<=rear;i++)
                     {
                         printf("\n %d",data[i]);
                     }
                 }
             break;

             case 5:
             exit(1);
             break;
         }
     }
}