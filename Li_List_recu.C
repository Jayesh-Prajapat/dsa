#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct Node
  {
  int data;
  Node* next;
  };

void insertNode(Node* &r,Node *t)
  {
  if(r == NULL)
    {
    r = t;
    }
  else
    {
    insertNode(r->next,t);
    }
  }

Node* createNode(int da)
  {
  Node *p = (Node*)malloc(sizeof(Node));
  p->data = da;
  p->next = NULL;
  return(p);
  }

int main()
  {
  
  int ch;
  int da;
  Node *start = NULL,*temp = NULL;
  while(1)
  {
      printf("\n press 1 for insert new Node at the end  = ");
      printf("\n press 2 for insert Node at start  = ");
      printf("\n press 3 for delete Node from start  = ");
      printf("\n press 4 for delete not which match the given  valaue = ");
      printf("\n press 5 for show all nodes  = ");
      printf("\n press 9 for exit = ");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
          {
            printf("\n enter the data into Node ");
            scanf("%d",&da);
            Node *p = createNode(da);
            insertNode(start,p);
          }
          break;

          case 2:
            Node *t;
            t=start;
            start = (Node*)malloc(sizeof(Node));
            start->next=t;
            printf("\n enter the data into Node = ");
            scanf("%d",&start->data);
          break;
           
          case 3:
            if(start==NULL)
            {
                printf("\n list is empty = ");
            }
            else
            {
                t=start;
                start = start->next;
                free(t);
            }
          break;

          case 4:
          
            int n;
            printf("\n enter the value = ");
            scanf("%d",&n);
            Node *prv;
            t=start;
               while(1)
               {
                   if(t != start)
                   {
                       if(t->data == n)
                       {
                           prv->next = t->next;
                           free(t);
                       }
                       prv = t;
                       t = t->next;
                   }
                   else
                   {
                       if(t->data == n)
                       {
                           Node *p;
                           p=start;
                           start = start->next;
                           free(p);
                           break;
                       }
                       prv = t;
                       t = t->next;
                   }
                   if(t->next == NULL)
                   {
                         break;
                   }
               }
          
          break;

          case 5:
            if(start == NULL)
            {
                printf("\n No record found ...!");
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
          exit(1);
          break;
      }
      
  }

  }