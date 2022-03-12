#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

int main()
{
    struct Node* top = NULL;
    struct Node* temp = NULL;
    int ch,i;
    while(1)
    {
        printf("\n press 1 for intilize stack = ");
        printf("\n press 2 for push elements int stack ");
        printf("\n press 3 for pop elements in stack  ");
        printf("\n press 4 for show all elements in stack ");
        printf("\n press 5 for exit in stack ");
        scanf("%d",&ch);
        switch(ch) 
        {
            case 1:
            top = NULL;
            break;
            
            case 2:
            top = (struct Node*)malloc(sizeof(struct Node));
            printf("\n enter the daata into Node ");
            scanf("%d",&top->data);
            top->next = temp;
            temp = top;
            break;
            
            case 3:
            if(top == NULL)
            {
                printf("\n link is empty  ");
            }
            else
            {
                temp = top;
                top = top->next;
                printf("\n deleted Node = %u and its address = %d",temp,temp->data);
                free(temp);
            }
            break;
            
            case 4:
            if(top==NULL)
            {
                printf("\n stack is empty ");
            }
            else
            {
                temp == top;
                while(temp->next!=NULL)
                {
                     printf("\n Node = %u and its value= %d ",temp,temp->data);
                     temp = temp->next;
                }
                printf("\n Node = %u and its value= %d",temp,temp->data);
            }
            break;
            
            case 5:
            exit(1); 
            break;
        }
    }
}