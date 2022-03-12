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
    printf("\nPress 1 for Insert a New Node = ");
    printf("\nPress 2 for Show all Nodes = ");
    printf("\nPress 9 to Exit = ");
    scanf("%d",&ch);
    switch(ch)
      {
      case 1:
      {
      printf("Enter the Data into Node = ");
      scanf("%d",&da);
      Node* p = createNode(da);
      insertNode(start,p);
      break;
      }
      case 2:
      if(start == NULL)
	{
	printf("\nNo Record Found ...!");
	}
      else
	{
	Node *temp = start;
	while(1)
	  {
	  if(temp->next!=NULL)
	    {
	    printf("\nValue at %u Node is = %d",temp,temp->data);
	    temp = temp->next;
	    }
	  else
	    {
	    printf("\nValue at %u Node is = %d",temp,temp->data);
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