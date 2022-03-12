#include<stdio.h>
#include<stdlib.h>
struct Node
  {
  int data;
  Node *next;	
  };
  
class LinkedList
  {
  Node *start;
  Node *temp;
  int non;
  
  public:
  
  LinkedList()
    {
    start = temp = NULL;	
	}
  
  static Node* createNode(int da)
    {
    Node* t = (Node*)malloc(sizeof(Node));
	t->data = da;
	t->next = NULL;
	return(t);	
	}
	
  void insertNode(Node *p)
    {
    if(start == NULL)
	  {
	  start = p;
	  temp = p; 	
	  }	
	else
	  {
	  temp->next = p;
	  temp = temp->next;	
	  }  
	}	
	
  void Traverse()
    {
    Node *t = start;
    if(t == NULL)
      {
      printf("List is Empty ....!");	
	  }
	else
	  {  
      while(t->next!=NULL)
	    { 	
	    printf("\nData at %u Node = %d",t,t->data);
	    t = t->next;
	    }  	
	    printf("\nData at %u Node = %d",t,t->data);   
      }
	}	
  	
  };
  
  
int main()
  {
  LinkedList *li = new LinkedList();	
  Node *p = LinkedList::createNode(30);
  li->insertNode(p);
  
  li->insertNode(LinkedList::createNode(100));
  li->Traverse();  	
  }