#include<stdio.h>
#include<malloc.h>
struct Node
{
    int data;
    Node *next;
};
int main()
{
     int ch;
     Node *start = NULL,*temp = NULL;

     while(1)
     {
         printf("\n press 1 for insert a new alement = ");
         printf("\n press 2 for show all nodes = ");
         printf("\n press 9 for exit = ");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:
                 if(start == NULL)
                 {
                     start = (Node*)malloc(sizeof(Node));
                     printf("\n enter the data into Node = ");
                     scanf("%d",&start->data);  
                     start->next = NULL;
                     temp = start;
                 }
                 else
                 {
                     temp->next = (Node*)malloc(sizeof(Node));
                     temp = temp->next;
                     printf("\n enter the data into Node = ");
                     scanf("%d",&temp->data);
                     temp->next = NULL;
                 }
             break;
             
             case 2:
                 if(start == NULL)
                 {
                     printf("\n no record found......");
                 }
                 else
                 {
                     Node *temp = start;
                     while(1)
                     {
                         if(temp->next!=NULL)
                         {
                             printf("\n value at %u Node is = %d",temp,temp->data);
                             temp = temp->next;
                         }
                         else
                         {
                             printf("\n value at %u Node is = %d",temp,temp->data);
                             break;
                         }
                         
                     }
                 }
             break;

             case 9:
             
             break;
         }
     }
}