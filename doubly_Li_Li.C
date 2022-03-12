#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct Node
{
   int data;
   Node* next;
   Node* prv;
};
void forwardtravers(Node* t)
{
    if(t->next == NULL)
    {    
       printf("\n %d",t->data);
    }
    else
    {
       printf("\n %d",t->data);
       forwardtravers(t->next);
    }
}
void backwordtravers(Node* t)
{
   if(t->prv == NULL)
   {
      printf("\n %d",t->data);
   }
   else
   {
      printf("\n %d",t->data);
      backwordtravers(t->prv);
   }
}
int main()
{
    Node* start=NULL;
    Node* temp = NULL;
    int ch,i;
    while(1)
    {
    printf("\n press 1 for initilize two way linked list = ");
    printf("\n press 2 for insert new element = ");
    printf("\n press 3 for delete element form start two linked list = ");
    printf("\n press 4 for delete element form end two linked list = ");
    printf("\n press 5 for show all elements int two way linked list{forward traversing} = ");
    printf("\n press 6 for show all elements into two linked list {backword traversing} = ");
    printf("\n press 7 for exit = ");
    scanf("%d",&ch);

    switch(ch)
    {
       case 1:
          if(start == NULL)
          {
             printf("\n Intilize a two way linked list ");
          }
       break;

       case 2:
          if(start == NULL)
          {
               start = (Node*)malloc(sizeof(Node));
                start->prv = NULL;
                start->next = NULL;
               printf("\n enter the data into linked list = ");
               scanf("%d",&start->data);
               temp = start;
          }
          else
          {
               temp->next = (Node*)malloc(sizeof(Node));
               temp->next->prv = temp;
               temp = temp->next;
               temp->next = NULL;
               printf("\n enter the data into linked list = ");
               scanf("%d",&temp->data);
          }
       break;

       case 3:
         if(start == NULL)
            printf("List is Empty!!! Deletion not possible!!!");
         else
         {
                struct Node *temp = start;
             if(temp -> prv == temp -> next)
             {
                start = NULL;
                free(temp);
             }
             else{
                start = temp -> next;
                start -> prv = NULL;
                free(temp);
             }
                printf("\nDeletion success!!!");
        }

       break;
        
       case 4:
           if(start == NULL)
           {
              printf("\n List is Empty!!! Deletion not possible!!!");
           }
           else
           {
              struct Node* jay;
              jay = temp;
              if(temp->prv == temp->next)
              {
                 start = NULL;
                 free(temp);
              }
              else
              {
                   jay = temp->prv;
                   jay->next = NULL;
                   free(temp);
                   temp  = jay;
              }
              printf("\n deletion succesfully :");
           }
       break;
       case 5:
          if(start == NULL)
          {
             printf("\n linked list is a empty ");
          }
          else
          {
             forwardtravers(start);
          }
       break;

       case 6:
         if(start == NULL)
         {
            printf("\n linked is a empty ");
         }
         else
         {
            backwordtravers(temp);
         }
       break;

       case 7:
         exit(1);
       break;

    }
    }
}