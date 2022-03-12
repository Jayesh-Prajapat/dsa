#include<stdio.h>
#include<stdlib.h>
int main()
{
    int data[10];
    int top = -1;
    int i,ch;

    while(1)
    {
        printf("\n press 1 for initilize stack = ");
        printf("\n press 2 for push an element = ");
        printf("\n press 3 for pop  an element = ");
        printf("\n press 4 for travers the stack = ");
        printf("\n press 5 for exit ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
              top = -1;
              printf("\n stack is intilized succesfully .....!");
            break;

            case 2:
            
              if(top == 9)
              {
                  printf("\n stack is full ");
              }
              else
              {
                  ++top;
                  printf("\n enter the value at %d of stack = ",top);
                  scanf("%d",&data[top]);
              }
            
            break;

            case 3:
            
               if(top==-1)
               {
                   printf("\n stack is empty ");
               }
               else
               {
                   printf("\n delete the value at top %d of stack = %d",top,data[top]);
                   data[top] = 0;
                   top--;
                   
               }   
            
            break;

            case 4:
              if(top == -1)
              {
                  printf("\n stack is empty ");
              }
              else
              {
                  for(i=top;i>=0;i--)
                  {
                      printf("\n at %d location = %d",i,data[i]);
                  }
              }
            break;

            case 5:
            exit(1);
            break;
        }
    }
}