#include<stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int item;
int choice;
int top=-1;

void push();
void pop();
void display();


int main() {
    do
    {
        printf(" 1) push\n 2) pop\n 3) display\n 4) exit\n");
        printf("Enter a choice :");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;
        case 4:break;
        default:printf("Invalid choice!\n");
            break;
        }
    } while (choice !=4);
    return 0;
}

void push(){
    if (top == MAX_SIZE - 1){
        printf("stack overflow!\n");
        return;
    }
    printf("enter a value to push to stack:");
    scanf("%d",&item);
    top++;
    stack[top]=item;
}

void pop(){
    if (top == -1){
        printf("stack underflow!\n");
        return;
    }
    item=stack[top];
    top--;
    printf("%d is deleted\n",item);
}

void display(){
        int i;
        if (top==-1)
        {
            printf("Stack underflow");
            return;
        }
        for (i=top;i>=0;i--)
        printf("%d\n",stack[i]);
}